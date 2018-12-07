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
bloque	 : LEFT_KEY {InsertMark();} Declar_de_variables_locales										//////////
					Declar_de_subprogs Sentencias RIGHT_KEY {Delete();}											//////////
	     | LEFT_KEY Declar_de_variables_locales Declar_de_subprogs RIGHT_KEY ;
Declar_de_subprogs  : Declar_de_subprogs Declar_subprog
                    | ;
Declar_subprog      : Cabecera_subprograma {subProg = 1;} bloque {subProg = 0;};
Declar_de_variables_locales : INITVAR {decVar = 1;} Variables_locales ENDVAR { decVar = 0;};
			                      | ;
Cabecera_programa	: MAIN LEFT_PARENTHESIS argumentos RIGHT_PARENTHESIS;
Variables_locales	: Variables_locales Cuerpo_declar_variables
			        | Cuerpo_declar_variables ;
Cuerpo_declar_variables : tipo list_id SEMICOLON;
Cabecera_subprograma : tipo {getType($1);} ID {decParam = 1;} {addFunc($2);}		//////////
 											LEFT_PARENTHESIS argumentos RIGHT_PARENTHESIS {decParam = 0;};
argumentos  : argumentos COMA argumento
	        | argumento
	        |;
argumento : tipo ID;
Sentencias  : Sentencias {decVar = 2;} Sentencia
            | {decVar = 2;} Sentencia ;
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
                    {if ($2.type == BOOLEAN || $2.type == CHAR || $2.type == LIST)
                        printf("Semantic Error(%d): Type not increaseable.\n", line);
                    &&.type = $2.type;}
			              | MINUSMINUS expresion SEMICOLON
                    {if ($2.type == BOOLEAN || $2.type == CHAR || $2.type == LIST)
                        printf("Semantic Error(%d): Type not decrementacle.\n", line);
                    &&.type = $2.type;}
			              | expresion PLUSPLUS SEMICOLON
                    {if ($1.type == BOOLEAN || $1.type == CHAR || $1.type == LIST)
                        printf("Semantic Error(%d): Type not increaseable.\n", line);
                    &&.type = $2.type;}
			              | expresion MINUSMINUS SEMICOLON
                    {if ($1.type == BOOLEAN || $1.type == CHAR || $1.type == LIST)
                        printf("Semantic Error(%d): Type not decrementable.\n", line);
                    &&.type = $2.type;};
sentencia_asignacion  : ID ASSIGN expresion SEMICOLON
                      {if ($1.type != $3.type){
		                      printf("Semantic Error(%d): Types are not equal.\n",line, $1.type, $3.type);};
sentencia_if  : IF LEFT_PARENTHESIS expresion RIGHT_PARENTHESIS THEN Sentencia
              {if ($3.type != BOOLEAN)
                  printf("Semantic Error(%d): Expression are not logic.\n", line);}
              | IF LEFT_PARENTHESIS expresion RIGHT_PARENTHESIS THEN Sentencia ELSE Sentencia
              {if ($3.type != BOOLEAN)
                  printf("Semantic Error(%d): Expression are not logic.\n", line);};
sentencia_while : WHILE LEFT_PARENTHESIS expresion RIGHT_PARENTHESIS Sentencia
                {if ($3.type != BOOLEAN)
                    printf("Semantic Error(%d): Expression are not logic.\n", line);};
sentencia_entrada : IN CADENA list_id SEMICOLON
		          | IN list_id SEMICOLON;
sentencia_salida  : OUT list_expresiones_o_cadena SEMICOLON ;
sentencia_return  : RETURN expresion {checkReturn($2,&$$);} SEMICOLON ;             //////////////////////
sentencia_for 	: FOR ID ASSIGN_FOR constante TO constante DO bloque;
sentencia_list  : expresion LIST_OP
                | DOLLAR expresion ;

expresion : NEG expresion
          {if ($2.type != BOOLEAN)
              printf("Semantic Error(%d): Expression are not logic.\n", line);
          &&.type = $2.type;}
          | COUNT_QUEST expresion             ////////////////////////////////////? (interrogante)
          {if ($2.type != LIST)
              printf("Semantic Error(%d): Expression are not logic.\n", line);
          &&.type = INT;}
          | SYMBOL_OP expresion %prec NEG_COUNT_QUEST
          {if ($2.type == BOOLEAN || $2.type == CHAR || $2.type == LIST)
              printf("Semantic Error(%d): Type not signable.\n", line);
          &&.type = $2.type;}
          | expresion SYMBOL_OP expresion
          {if ($1.type == BOOLEAN || $3.type == BOOLEAN || $1.type == CHAR || $3.type == CHAR)
              printf("Semantic Error(%d): Types not operable.\n", line);
           if ($1.type == LIST && $3.type == LIST)
              printf("Semantic Error(%d): Types not operable.\n", line);
          $$.type = INT;
          if ($1.type == DOUBLE || $3.type == DOUBLE)
            $$.type = DOUBLE;
          if ($1.type == LIST || $3.type == LIST)
            $$.type == LIST;}
          | expresion BINARY_OP expresion
          {if ($1.type == BOOLEAN || $1.type == CHAR || $3.type == BOOLEAN || $3.type == CHAR)
              printf("Semantic Error(%d): Types not operable.\n", line);
           if ($1.type == LIST && $3.type == LIST)
              printf("Semantic Error(%d): Types not operable.\n", line);
          $$.type = INT;
          if ($1.type == DOUBLE || $3.type == DOUBLE)
            $$.type = DOUBLE;
          if ($1.type == LIST || $3.type == LIST)
            $$.type == LIST;}
          | expresion BINARY_LIST_OP_I expresion
          {if ($1.type != LIST || $3.type != INT)
              printf("Semantic Error(%d): Types not operable.\n", line);
          $$.type = LIST;}
          | expresion BINARY_LIST_OP_L expresion
          {if ($1.type != LIST || $3.type != LIST)
              printf("Semantic Error(%d): Types not operable.\n", line);
          $$.type = LIST;}
          | expresion AND_OP expresion
          {if ($1.type != BOOLEAN || $3.type != BOOLEAN)
              printf("Semantic Error(%d): Expression are not logic.\n", line);
          $$.type = BOOLEAN;}
          | expresion OR_OP expresion
          {if ($1.type != BOOLEAN || $3.type != BOOLEAN)
              printf("Semantic Error(%d): Expression are not logic.\n", line);
          $$.type = BOOLEAN;}
          | expresion XOR_OP expresion
          {if ($1.type != BOOLEAN || $3.type != BOOLEAN)
              printf("Semantic Error(%d): Expression are not logic.\n", line);
          $$.type = BOOLEAN;}
          | expresion RELATION_OP expresion
          {if ($1.type == BOOLEAN || $3.type == BOOLEAN || $1.type == CHAR ||
           $3.type == CHAR || $1.type == LIST || $3.type == LIST)
              printf("Semantic Error(%d): Types not comparable.\n", line);
          $$.type = BOOLEAN;}
          | expresion EQUALS_OP expresion
          {if ($1.type != $3.type)
              if ($1.type == INT || $3.type == INT || $1.type == DOUBLE || $3.type == DOUBLE){
              } else
                  printf("Semantic Error(%d): Types not comparable.\n", line);
          $$.type = BOOLEAN}
          | expresion AT expresion                //////////////////////////////@
          {if ($1.type != LIST || $3.type != INT)
              printf("Semantic Error(%d): Types not operable.\n", line);}
          | expresion MINUSMINUS expresion
          {if ($1.type != LIST || $3.type != INT)
              printf("Semantic Error(%d): Types not operable.\n", line);
          $$.type = LIST;}
          | ID                {$$.type = $1.type;}
          | constante         {$$.type = $1.type;}
          | funcion           {$$.type = $1.type;}
          | expresion PLUSPLUS expresion AT AT expresion
          {if ($1.type != LIST || $3.type != INT || $6.type != INT)
              printf("Semantic Error(%d): Types not operable.\n", line);
          $$.type = LIST;}
	      | LEFT_PARENTHESIS expresion RIGHT_PARENTHESIS   {$$.type = $2.type;}
	      | error;

funcion   : ID LEFT_PARENTHESIS list_expresiones RIGHT_PARENTHESIS
	      | ID LEFT_PARENTHESIS RIGHT_PARENTHESIS;
list_expresiones_o_cadena : list_expresiones_o_cadena COMA exp_cad {nParam++; checkParam($1, nParam);}
                          | exp_cad {nParam = 1; tsCheckParam($1, nParam);};
exp_cad                   : expresion
                          | CADENA ;
constante                 : CONST_INT                       {$$.type = INT}
                          | CONST_DOUBLE                    {$$.type = DOUBLE}
                          | CONST_CHAR                      {$$.type = CHAR}
                          | CONST_BOOLEAN                   {$$.type = BOOLEAN}
                          | const_list_int                  {$$.type = LIST}
                          | const_list_double               {$$.type = LIST}
                          | const_list_boolean              {$$.type = LIST}
                          | const_list_char ;               {$$.type = LIST}
list_expresiones          : list_expresiones COMA expresion
                          | expresion;
tipo                      : tipo_elemental
                          | LIST_OF tipo_elemental
													| LIST_OF LIST_OF tipo_elemental ;
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

list_id   : list_id COMA ID			{InsertID($3);}
          | ID									{InsertID($1);}
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
