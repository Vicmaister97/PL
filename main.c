/*********************************************************
**
** Fichero: MAIN.C
** Función: Pruebas de FLEX para practicas Proc.Leng
**
*********************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "tab.h"

extern FILE *yyin ;
int yyparse(void) ;


int main (int argc, char *argv[])
{
	if (argc == 2){
		yyin = fopen(argv[1], "r");

		if (yyin == NULL){
			fprintf (stderr, "El fichero '%s' no se puede abrir\n", argv[1]);
			exit (-1);
		}

		else{
			printf("Leyendo fichero '%s'\n",argv[1]);
		}
	}

	else{
		printf("Leyendo entrada estándar\n");
		yyin = stdin;
	}

	return yyparse();
}

