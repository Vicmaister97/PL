/*----- Sección de Declaraciones --------------*/
%{

#include <stdio.h>
#include <stdlib.h>
#include "tab.h"

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
"="                                          return EQUALS;
"if"                                         return IF;
"then"                                       return THEN;
"else"                                       return ELSE;
"while"                                      return WHILE;
"return"                                     return RETURN;
"for"                                        return FOR;
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
\*|\/|<|<=|>|>=|==|and|or|xor|%|\*\*         return BINARY_OP;
"<<|>>"                                      return LIST_OP;
"list_of"                                    return LIST_OF;
"int"|"double"|"boolean"|"char"              return BASIC_TYPES;
[0-9]+                                       return CONST_INT;
[0-9]*\.[0-9]+                               return CONST_DOUBLE;
"true"|"false"                               return CONST_BOOLEAN;
\"[^\"]\"                                    return CONST_CHAR;
\"[^\"]*\"                                   return ID;
[_a-zA-Z][_a-zA-Z0-9]*                       return CADENA;
\n                                           {n_lines++; ECHO; printf("\n");}
[\t\r ]+                                     {}
.                                            {ECHO; printf("\nError Léxico en la linea %i, el lexema correspondiente es: %s \n", n_lines, yytext);}


%%
/*----- Sección de Procedimientos --------*/

int main(){
    int val;
    val=yylex();
    while(val!=0){
        printf(" %d \n", val);
        val=yylex();
    }
    exit(1);
}

int yywrap() {return 1;}
