/*********************************************************
**
** Procesadores de Lenguajes, 2018-2019
** Fichero: SEMANTICA.H
** Autores: Manuel Orantes Taboada, Víctor Bricio Blázquez, Víctor García Carrera.
** Función: Archivo de definición de la tabla de símbolos (TS) junto con sus constantes
** 	   		y procedimientos para las comprobaciones semánticas del traductor.
**
**
*********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum{	// Enumeración para definir el tipo de entrada en la TS

	MARK = 0,		// Marca especial para referenciar los inicios de bloque
	FUNCTION,		// Indica que es una función
	VAR,			// Indica que es una variable local
	FORM_PARAM		// Indica que es un parámetro formal de una función

} tipoEntrada;

typedef enum {	// Enumeración para definir el tipo de dato de las entradas función, variable local o parámetro formal

	INT = 0,		// Entero
	DOUBLE,			// Real
	CHAR,			// Caracter
	BOOLEAN,		// Booleano
	LIST_INT,		// Lista
	LIST_DOUBLE,
	LIST_CHAR,
	LIST_BOOLEAN,
	SIZE,			// Tamanio o dimensión de una lista situada en la entrada anterior
	NO_ASSIG		// Aun no se ha asignado el tipo, para inicialización

	// Matriz???

} tipoDato;




#define YYSTYPE atributos	// A partir de ahora, cada símbolo tiene una estructura de tipo atributos
typedef struct {	// Los atributos usados son el tipo de los elementos y el lexema

	int attr;				// Atributo del símbolo (si tiene)
	char *name;				// Nombre del lexema
	tipoDato type;			// Tipo del símbolo
	/*unsigned int nDim;	// En el caso de una lista, indica su dimensión o tamanio

	// Tamaño de la dimensión 1
	int tDim1;

	// Tamaño de la dimensión 2
	int tDim2;*/

}atributos;
/*************************************************************
** DEFINICIÓN DE LOS ELEMENTOS DE LA TABLA DE SÍMBOLOS (TS) **
**************************************************************/
#define MAX_TS 1000	// Tamanio máximo de la tabla de símbolos

typedef struct {	// Entrada de la tabla de símbolos (TS)

	tipoEntrada entry;		// Tipo de entrada, valor del tipo enum tipoEntrada
	char *name;				// Nombre o caracteres que conforman el identificador, no utilizado en una marca de bloque
	tipoDato type;			// Tipo de dato para las funciones, variables o parámetros formales, valor del tipo enum tipoDato
	int nParams;			// En el caso de una función, indica el número de parámetros formales (COMO SE ACTUALIZA??)
	/*unsigned int nDim;	// En el caso de una lista, indica su dimensión o tamanio

	// Tamaño de la dimensión 1
	int tDim1;

	// Tamaño de la dimensión 2
	int tDim2;*/

}entradaTS;

/**
extern long int TOPE = 0 ;			// Tope de la pila, indica en cada momento la siguiente posición en la pila TS para insertar una entrada
extern unsigned int Subprog ;		// Indicador de comienzo de bloque de un subprograma
extern entradaTS TS[MAX_TS] ;		// Pila de la tabla de símbolos

// Línea del fichero que se está analizando
extern int line;

// Indica si las variables se están utilizando (decVar=0), si se están declarando (decVar=1)
// o si se llaman desde una expresión (decVar=2)
extern int decVar;

// Indica el comienzo de un subprograma o función con 0 si es un bloque y 1 si
// es la cabecera del subprograma
extern int subProg;

// Indica si se están declarando parámetros formales en una función
extern int decParam;

extern int decFunction;

// Variable global que almacena el tipo en las declaraciones
extern tData globalType;

// Cuenta el número de parámetros de una función
extern int nParam;

// Índice de la tabla de símbolos de la función que se está utilizando
extern int currentFunction;
extern int aux;

// Devuelve si el atributo es array o no
int isArray(attrs e);

// Devuelve si los dos posibles arrays que recibe tienen el mismo tamaño
int equalSize(attrs e1, attrs e2);

// Guarda el tipo de la variable
int setType(attrs value); **/

/*************************************************************
** LISTA DE FUNCIONES Y PROCEDIMIENTOS PARA MANEJO DE LA TS **
**************************************************************/

///////////////////////////////////////////////////////////////////////////////
// Tabla de Símbolos
//

// Inserta una entrada en la tabla de símbolos

/* Fin de funciones y procedimientos para manejo de la TS */
