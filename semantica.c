/*********************************************************
**
** Procesadores de Lenguajes, 2018-2019
** Fichero: SEMANTICA.C
** Autores: Manuel Orantes Taboada, Víctor Bricio Blázquez, Víctor García Carrera.
** Función: Archivo de implementación de los métodos definidos en semantica.h de la
** 	    tabla de símbolos (TS) para las comprobaciones semánticas del traductor.
**
**
*********************************************************/

#include "semantica.h"

entradaTS TS[MAX_TS] ;		// Pila de la tabla de símbolos
int line = 1;			// Línea actual del fichero que se está analizando
long int TOPE = 0 ;		// Tope de la pila, indica en cada momento la siguiente posición en la pila TS para insertar una entrada
int decVar = 0;			// Indica si las variables se están utilizando (decVar=0), si se están declarando (decVar=1)
				// o si se llaman desde una expresión (decVar=2)
int decParam = 0;
int decFunction = 0;
int subProg = 0;
tipoDato globalType = NA;
int nParam = 0;
int currentFunction = -1;
int aux = 0;


