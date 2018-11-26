/*----- Sección de Declaraciones --------------*/
%{
/*********************************************************
**
** Fichero: TOKENS.L
** Función: Pruebas de FLEX para practicas de PL.
**
*********************************************************/

/**
 Buffer usado para almacenamiento temporal de cadenas de texto
**/

#define MAXLONBUFFER 200
char buffer[MAXLONBUFFER] ;

int n_lines = 1;
%}

/** La siguiente declaración indica que no se va a escribir la función ’yywrap’
*** evita que se tenga que enlazar con -lfl, o que se tenga que escribir ’yywrap’
**/

%option noyywrap


%%
	/*----- Sección de Reglas ----------------*/
"main"                                       return MAIN;
"\{"                                         return LEFT_KEY;
"\}"                                         return RIGHT_KEY;
"\["                                         return LEFT_BRACKET;
"\]"                                         return RIGHT_BRACKET;
";"                                          return SEMICOLON;
"\("                                         return LEFT_PARENTHESIS;
"\)"                                         return RIGHT_PARENTHESIS;
","                                          return COMA;
"="                                          return ASSIGN;
"if"                                         return IF;
"then"                                       return THEN;
"else"                                       return ELSE;
"while"                                      return WHILE;
"return"                                     return RETURN;
"for"                                        return FOR;
:=                                           return ASSIGN_FOR;
"to"                                         return TO;
"do"                                         return DO;
"out"                                        return OUT;
"in"                                         return IN;
"initVar"                                    return INITVAR;
"endVar"                                     return ENDVAR;
"\+\+"                                       return PLUSPLUS;
"@"                                          return AT;
"\$"                                         return DOLLAR;
!|#|\?                                       return NEG_COUNT_QUEST;
\+|\-                                        return SYMBOL_OP;
"--"                                         return MINUSMINUS;
\*|\/|%|\*\*                                 return BINARY_OP;
>|<=|<|>=                                    return RELATION_OP;
==|<>                                        return EQUALS_OP;
"and"                                        return AND_OP;
"or"                                         return OR_OP;
"xor"                                        return XOR_OP;
"<<|>>"                                      return LIST_OP;
"list_of"                                    return LIST_OF;
"int"|"double"|"boolean"|"char"              return BASIC_TYPES;
[0-9]+                                       return CONST_INT;
[0-9]*\.[0-9]+                               return CONST_DOUBLE;
"true"|"false"                               return CONST_BOOLEAN;
\"[^\"]\"                                    return CONST_CHAR;
\"[^\"]*\"                                   return CADENA;
[_a-zA-Z][_a-zA-Z0-9]*                       return ID;
\n                                           { /** lleva la cuenta de las líneas **/
						n_lines++; }
[ \t]+	                                     { /** accion vacia: se ignoran los espacios y tabuladores **/ }
.                                            { /** token desconocido, se produce un mensaje de error **/
						snprintf(buffer, MAXLONBUFFER, "el(los) caracter(es) ’%s’ no forma(n) ningun token conocido", yytext);
						yyerror(buffer); }


%%
/*----- Sección de Procedimientos --------*/
