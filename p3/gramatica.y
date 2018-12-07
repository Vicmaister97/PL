/*********************************************************
**
** Fichero: GRAMATICA.Y
** Autores: Manuel Orantes Taboada, Víctor Bricio Blázquez, Víctor García Carrera.
** Función: Archivo YACC para implementar el traductor.
**
*********************************************************/

%{

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/** La siguiente declaracion permite que ’yyerror’ se pueda invocar desde el
*** fuente de lex (tokens.l)
**/

void yyerror(const char *msg);
int yylex();

%}

/** Para uso de mensajes de error sintáctico con BISON.
*** La siguiente declaración provoca que ’bison’, ante un error sintáctico,
*** visualice mensajes de error con indicación de los tokens que se esperaban
*** en el lugar en el que produjo el error.
**/

%error-verbose

/** Declaramos la lista de nombres simbólicos de los tokens de nuestra gramática, junto con su asociatividad y precedencia
**/

%token MAIN RIGHT_PARENTHESIS LEFT_KEY RIGHT_KEY LEFT_BRACKET RIGHT_BRACKET SEMICOLON COMA ASSIGN IF THEN ELSE WHILE RETURN FOR ASSIGN_FOR TO DO OUT IN INITVAR ENDVAR LIST_OF BASIC_TYPES CADENA
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
%left CONST_INT CONST_DOUBLE CONST_BOOLEAN CONST_CHAR ID
%right LEFT_PARENTHESIS

/** CONSULTAR PRECEDENCIA DOLLAR LIST_OP, AT Y PARENTESIS

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

/** Declaramos el conjunto de reglas o producciones que definen nuestra gramática
**/

Programa : Cabecera_programa bloque ;
bloque	 : LEFT_KEY Declar_de_variables_locales
					Declar_de_subprogs Sentencias RIGHT_KEY
	     | LEFT_KEY Declar_de_variables_locales Declar_de_subprogs RIGHT_KEY ;
Declar_de_subprogs  : Declar_de_subprogs Declar_subprog
                    | ;
Declar_subprog      : Cabecera_subprograma  bloque ;
Declar_de_variables_locales : INITVAR Variables_locales ENDVAR ;
			                |;
Cabecera_programa	: MAIN LEFT_PARENTHESIS argumentos RIGHT_PARENTHESIS;
Variables_locales	: Variables_locales Cuerpo_declar_variables
			        | Cuerpo_declar_variables ;
Cuerpo_declar_variables : tipo list_id SEMICOLON;
Cabecera_subprograma : tipo ID
 											LEFT_PARENTHESIS argumentos RIGHT_PARENTHESIS;
argumentos  : argumentos COMA argumento
	        | argumento
	        |;
argumento : tipo ID;
Sentencias  : Sentencias Sentencia
            | Sentencia ;
Sentencia   : bloque
	        | sentencia_contador
            | sentencia_asignacion
            | sentencia_if
            | sentencia_while
            | sentencia_entrada
            | sentencia_salida
            | sentencia_return
            | sentencia_for
            | sentencia_list;

sentencia_contador	: PLUSPLUS expresion SEMICOLON
			        | MINUSMINUS expresion SEMICOLON
			        | expresion PLUSPLUS SEMICOLON
			        | expresion MINUSMINUS SEMICOLON;
sentencia_asignacion  : ID ASSIGN expresion SEMICOLON;
sentencia_if  : IF LEFT_PARENTHESIS expresion RIGHT_PARENTHESIS THEN Sentencia
              | IF LEFT_PARENTHESIS expresion RIGHT_PARENTHESIS THEN Sentencia ELSE Sentencia ;
sentencia_while : WHILE LEFT_PARENTHESIS expresion RIGHT_PARENTHESIS Sentencia ;
sentencia_entrada : IN CADENA list_id SEMICOLON
		          | IN list_id SEMICOLON;
sentencia_salida  : OUT list_expresiones_o_cadena SEMICOLON ;
sentencia_return  : RETURN expresion SEMICOLON ;
sentencia_for 	: FOR ID ASSIGN_FOR constante TO constante DO bloque;
sentencia_list  : expresion LIST_OP
                | DOLLAR expresion ;

expresion : NEG_COUNT QUEST expresion
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
          | expresion PLUSPLUS expresion AT AT expresion
	      | LEFT_PARENTHESIS expresion RIGHT_PARENTHESIS
	      | error;

funcion   : ID LEFT_PARENTHESIS list_expresiones RIGHT_PARENTHESIS
	      | ID LEFT_PARENTHESIS RIGHT_PARENTHESIS;
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
                          | expresion;
tipo                      : tipo_elemental
                          | LIST_OF tipo_elemental
													| LIST_OF LIST_OF tipo_elemental;
tipo_elemental            : BASIC_TYPES
			              			| error;
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
          | ID
	      | error;

%%


#ifdef DOSWINDOWS
#include "lexyy.c"
#else
#include "lex.yy.c"
#endif

/** Implementamos la función yyerror. En este caso
*** simplemente escribimos el mensaje de error en pantalla
**/

/** Utilizamos la variable ’yylineno’ que nos muestra la línea actual. Para ello es necesario
*** invocar a lex con la opción ’-l’.
**/

void yyerror (const char *msg)
{
  fprintf(stderr,"[Linea %d]: %s\n", yylineno, msg);
}
