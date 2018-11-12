%{
/*********************************************************
**
** Fichero: PRUEBA.Y
** Función: Pruebas de YACC para practicas de PL
**
********************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/** La siguiente declaracion permite que ’yyerror’ se pueda invocar desde el
*** fuente de lex (prueba.l)
**/
void yyerror( char * msg ) ;
/** La siguiente variable se usará para conocer el numero de la línea
*** que se esta leyendo en cada momento. También es posible usar la variable
*** ’yylineno’ que también nos muestra la línea actual. Para ello es necesario
*** invocar a flex con la opción ’-l’ (compatibilidad con lex).
**/
int linea_actual = 1 ;
%}
/** Para uso de mensajes de error sintáctico con BISON.
*** La siguiente declaración provoca que ’bison’, ante un error sintáctico,
*** visualice mensajes de error con indicación de los tokens que se esperaban
*** en el lugar en el que produjo el error (SÓLO FUNCIONA CON BISON>=2.1).
*** Para Bison<2.1 es mediante
***
*** #define YYERROR_VERBOSE
***
*** En caso de usar mensajes de error mediante ’mes’ y ’mes2’ (ver apéndice D)
*** nada de lo anterior debe tenerse en cuenta.
**/
%error-verbose
/** A continuación declaramos los nombres simbólicos de los tokens.
*** byacc se encarga de asociar a cada uno un código
**/
%token MAIN
%token LEFT_KEY
%token RIGHT_KEY
%token LEFT_BRACKET
%token RIGHT_BRACKET
%token SEMICOLON
%token LEFT_PARENTHESIS
%token RIGHT_PARENTHESIS
%token COMA
%token EQUALS
%token IF
%token THEN
%token ELSE
%token WHILE
%token RETURN
%token FOR
%token TO
%token DO
%token OUT
%token IN
%token INITVAR
%token ENDVAR
%token PLUSPLUS
%token AT
%token DOLLAR
%token NEG_COUNT_QUESTION
%token SYMBOL_OP
%token MINUSMINUS
%token BINARY_OP
%token LIST_OP
%token LIST_OF
%token BASIC_TYPES
%token CONST_INT
%token CONST_DOUBLE
%token CONST_BOOLEAN
%token CONST_CHAR
%token CADENA
%token ID

%%
/** Sección de producciones que definen la gramática.
**/

Programa	:	Cabecera_programa bloque
bloque	:	Inicio_de_bloque Declar_de_variables_locales Declar_de_subprogs Sentencias Fin_de_bloque
Declar_de_subprogs	:	Declar_de_subprogs Declar_subprog
										|
Declar_subprog	:	Cabecera_subprograma bloque
Declar_de_variables_locales	:	INITVAR Variables_locales ENDVAR
														|
Cabecera_programa	:	MAIN
Inicio_de_bloque	:	LEFT_KEY
Fin_de_bloque		:	RIGHT_KEY

Variables_locales	:	Variables_locales Cuerpo_declar_variables
									| Cuerpo_declar_variables
Cuerpo_declar_variables	:	tipo list_id SEMICOLON
Cabecera_subprograma		: tipo ID LEFT_PARENTHESIS argumentos RIGHT_PARENTHESIS
argumentos			: argumentos COMA argumento
argumento				: tipo ID

Sentencias	: Sentencias Sentencia
						| Sentencia
Sentencia		: bloque
						| sentencia_asignacion
						| sentencia_if
						| sentencia_while
						| sentencia_entrada
						| sentencia_salida
						| sentencia_return
						| sentencia_for
						| sentencia_list

sentencia_asignacion	: ID EQUALS expresion SEMICOLON

sentencia_if				: IF LEFT_PARENTHESIS expresion RIGHT_PARENTHESIS THEN Sentencia
										| IF LEFT_PARENTHESIS expresion RIGHT_PARENTHESIS THEN Sentencia ELSE Sentencia

sentencia_while			: WHILE LEFT_PARENTHESIS expresion RIGHT_PARENTHESIS Sentencia
sentencia_entrada		: IN list_id SEMICOLON
sentencia_salida		: OUT list_expresiones_o_cadena SEMICOLON
sentencia_return		: RETURN expresion SEMICOLON
sentencia_for				: FOR LEFT_PARENTHESIS expresion TO expresion COMA expresion RIGHT_PARENTHESIS DO Sentencia
										| FOR LEFT_PARENTHESIS expresion RIGHT_PARENTHESIS DO Sentencia
sentencia_list			: expresion LIST_OP
										| DOLLAR expresion

expresion		: LEFT_PARENTHESIS expresion RIGHT_PARENTHESIS
						| NEG_COUNT_QUESTION expresion
						| PLUSPLUS expresion
						| MINUSMINUS expresion
						| SYMBOL_OP expresion
						| expresion SYMBOL_OP expresion
						| expresion BINARY_OP expresion
						| expresion AT expresion
						| expresion MINUSMINUS expresion
						| ID
						| constante
						| funcion
						| expresion PLUSPLUS expresion AT expresion

funcion			: ID LEFT_PARENTHESIS list_expresiones RIGHT_PARENTHESIS

list_expresiones_o_cadena	: list_expresiones_o_cadena COMA exp_cad
													| exp_cad

exp_cad			: expresion
						| CADENA

constante		: CONST_INT
						| CONST_DOUBLE
						| CONST_BOOLEAN
						| CONST_CHAR
						| const_list_int
						| const_list_double
						| const_list_boolean
						| const_list_char

list_expresiones		: list_expresiones COMA expresion
										| expresion

tipo		: tipo_elemental
				| LIST_OF tipo_elemental

tipo_elemental	: BASIC_TYPES

const_list_int	: LEFT_BRACKET list_int RIGHT_BRACKET

list_int				: list_int COMA CONST_INT
								| CONST_INT

const_list_double	: LEFT_BRACKET list_double RIGHT_BRACKET

list_double			: list_double COMA CONST_DOUBLE
								| CONST_DOUBLE

const_list_boolean	: LEFT_BRACKET list_boolean RIGHT_BRACKET

list_boolean		: list_boolean COMA CONST_BOOLEAN
								| CONST_BOOLEAN

const_list_char	: LEFT_BRACKET list_char RIGHT_BRACKET

list_char			: list_char COMA CONST_CHAR
							| CONST_CHAR

list_id : list_id COMA ID
				| ID


%%
/** aqui incluimos el fichero generado por el ’lex’
*** que implementa la función ’yylex’
**/

#ifdef DOSWINDOWS /* Variable de entorno que indica la plataforma */
#include "lexyy.c"
#else
#include "lex.yy.c"
#endif

/** se debe implementar la función yyerror. En este caso
*** simplemente escribimos el mensaje de error en pantalla
**/
void yyerror( char *msg )
{
	fprintf(stderr,"[Linea %d]: %s\n", linea_actual, msg) ;
}
