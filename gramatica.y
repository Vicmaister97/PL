%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/** La siguiente declaracion permite que ’yyerror’ se pueda invocar desde el
*** fuente de lex (tokens.l)
**/

void yyerror(const char *msg);
int yylex();
int linea_actual = 1;
%}
%error-verbose

/** Declaramos la lista de tokens de nuestra gramática
**/
%token MAIN LEFT_KEY RIGHT_KEY LEFT_BRACKET RIGHT_BRACKET SEMICOLON  LEFT_PARENTHESIS RIGHT_PARENTHESIS COMA ASSIGN IF THEN ELSE WHILE RETURN FOR TO DO OUT IN INITVAR ENDVAR LIST_OF BASIC_TYPES CONST_INT CONST_DOUBLE CONST_BOOLEAN CONST_CHAR CADENA ID
%left OR_OP
%left AND_OP
%left XOR_OP
%left EQUALS_OP
%left RELATION_OP
%left SYMBOL_OP
%left BINARY_OP
%right NEG_COUNT_QUEST
%right MINUSMINUS
%right PLUSPLUS
%right DOLLAR LIST_OP
%right AT


/** Declaramos la precedencia (de menor a mayor) y asociatividad de los operadores

PROBLEMA: DELCARAR PRECEDENCIA Y ASOC DE OPERADORES CUANDO ESTÁN TODOS EN UN MISMO TOKEN (BINARY_OP...)
	 	 CAMBIO TOKENS.L?????

	  TBIEN COINCIDENCIAS ++ Y + POR EL SIMBOLO (REDECLARACION DE '+')

%left "||"
%left "&&"
%left "|"
%left "^"
%left "&"
%left "==" "!="
%left "<" ">" "<=" ">="
%left "+" "-"
%left "*" "/" "%"
%right "*" "&" "+" "-" "!"
%right "--"
%right "++"
%left "--"
%left "++"
%left "[" "]"

**/



%%

/** Declaramos el conjunto de reglas o producciones de nuestra gramática
**/

Programa : Cabecera_programa bloque ;
bloque  : Inicio_de_bloque Declar_de_variables_locales Declar_de_subprogs Sentencias Fin_de_bloque ;
Declar_de_subprogs  : Declar_de_subprogs Declar_subprog
                    | ;
Declar_subprog      : Cabecera_subprograma bloque ;
Declar_de_variables_locales : INITVAR Variables_locales ENDVAR ;
Cabecera_programa           : MAIN ;
Inicio_de_bloque  : LEFT_KEY ;
Fin_de_bloque : RIGHT_KEY ;
Variables_locales : Variables_locales Cuerpo_declar_variables
                  | Cuerpo_declar_variables ;
Cuerpo_declar_variables : tipo list_id SEMICOLON ;
Cabecera_subprograma : tipo ID LEFT_PARENTHESIS argumentos RIGHT_PARENTHESIS ;
argumentos  : argumentos COMA argumento | argumento ;
argumento : tipo ID ;
Sentencias  : Sentencias Sentencia
            | Sentencia ;
Sentencia   : bloque
            | sentencia_asignacion
            | sentencia_if
            | sentencia_while
            | sentencia_entrada
            | sentencia_salida
            | sentencia_return
            | sentencia_for
            | sentencia_list ;
sentencia_asignacion  : ID ASSIGN expresion SEMICOLON ;
sentencia_if  : IF LEFT_PARENTHESIS expresion RIGHT_PARENTHESIS THEN Sentencia
              | IF LEFT_PARENTHESIS expresion RIGHT_PARENTHESIS THEN Sentencia ELSE Sentencia ;
sentencia_while : WHILE LEFT_PARENTHESIS expresion RIGHT_PARENTHESIS Sentencia ;
sentencia_entrada : IN list_id SEMICOLON;
sentencia_salida  : OUT list_expresiones_o_cadena SEMICOLON ;
sentencia_return  : RETURN expresion SEMICOLON ;
sentencia_for : FOR LEFT_PARENTHESIS expresion TO expresion COMA expresion RIGHT_PARENTHESIS DO Sentencia
              | FOR LEFT_PARENTHESIS expresion RIGHT_PARENTHESIS DO Sentencia ;
sentencia_list  : expresion LIST_OP
                | DOLLAR expresion ;
expresion : LEFT_PARENTHESIS expresion RIGHT_PARENTHESIS
          | NEG_COUNT_QUEST expresion
          | PLUSPLUS expresion
          | MINUSMINUS expresion
          | SYMBOL_OP expresion %prec NEG_COUNT_QUEST
          | expresion SYMBOL_OP expresion
          | expresion BINARY_OP expresion
          | expresion AND_OP expresion
          | expresion OR_OP expresion
          | expresion XOR_OP expresion
          | expresion RELATION_OP expresion
          | expresion EQUALS_OP expresion
          | expresion AT expresion
          | expresion MINUSMINUS expresion
          | ID
          | constante
          | funcion
          | expresion PLUSPLUS expresion AT expresion ;
funcion   : ID LEFT_PARENTHESIS list_expresiones RIGHT_PARENTHESIS
					| ID LEFT_PARENTHESIS RIGHT_PARENTHESIS ;
list_expresiones_o_cadena : list_expresiones_o_cadena COMA exp_cad
                          | exp_cad ;
exp_cad                   : expresion
                          | CADENA ;
constante                 : CONST_INT
                          | CONST_DOUBLE
                          | CONST_CHAR
                          | CONST_BOOLEAN
                          | const_list_int
                          | const_list_double
                          | const_list_boolean
                          | const_list_char ;
list_expresiones          : list_expresiones COMA expresion
                          | expresion ;
tipo                      : tipo_elemental
                          | LIST_OF tipo_elemental ;
tipo_elemental            : BASIC_TYPES;
const_list_int  : LEFT_BRACKET list_int RIGHT_BRACKET ;
list_int  : list_int COMA CONST_INT
          | CONST_INT ;

const_list_double  : LEFT_BRACKET list_double RIGHT_BRACKET ;
list_double  : list_double COMA CONST_DOUBLE
          | CONST_DOUBLE ;

const_list_boolean  : LEFT_BRACKET list_boolean RIGHT_BRACKET ;
list_boolean  : list_boolean COMA CONST_BOOLEAN
          | CONST_BOOLEAN ;

const_list_char  : LEFT_BRACKET list_char RIGHT_BRACKET ;
list_char  : list_char COMA CONST_CHAR
          | CONST_CHAR ;

list_id   : list_id COMA ID
          | ID ;

%%

#ifdef DOSWINDOWS
#include "lexyy.c"
#else
#include "lex.yy.c"
#endif

/** se debe implementar la función yyerror. En este caso
*** simplemente escribimos el mensaje de error en pantalla
**/

void yyerror (const char *msg)
{
  fprintf(stderr,"[Linea %d]: %s/n", linea_actual, msg);
}
