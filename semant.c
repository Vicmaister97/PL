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

#include "semant.h"

entradaTS TS[MAX_TS] ;			// Pila de la tabla de símbolos
int line = 1;					// Línea actual del fichero que se está analizando
long int TOPE = 0 ;				// Tope de la pila, indica en cada momento la siguiente posición en la pila TS para insertar una entrada
int decVar = 0;					/* Indica si las variables se están utilizando (decVar=0), si se están declarando (decVar=1)
						   		   o si se llaman desde una expresión (decVar=2)*/
int decParam = 0;				// Indica si se están declarando parámetros formales en una función
int decFunction = 0;
int esFunc = 0;				/* Indica el comienzo de una función con 0 si es un bloque y 1 si
						   	   es la cabecera de la función */
tipoDato globalType = NO_ASSIG;	// Tipo de dato actual para asignarlo a las entradas de la TS
int nParams = 0;
int currentFunction = -1;		// Indica el índice de la función actual

/* Guarda el type o tipo de dato del atributo leido */
int getType(atributos value){

    globalType = value.type;

}

/*************************************************************
** METODOS DE MODIFICACIÓN DE LA TABLA DE SÍMBOLOS (TS) **
**************************************************************/

/* Inserta una entrada en la tabla de símbolos (TS). Devuelve 1 si funciona correctamente, -1 en caso de error */
int TS_AddEntry(entradaTS entrada){

    // Si aun quedan entradas en la tabla de símbolos
	if(TOPE < MAX_TS) {

		TS[TOPE].entry=entrada.entry;
		TS[TOPE].name=entrada.name;
		TS[TOPE].type=entrada.type;
		TS[TOPE].nParams=entrada.nParams;

        // Actualizamos el número de entradas
		TOPE++;

		return 1;

	}
	else{	// Si está completa

		printf("Semantic Error[line %d]: SYMBOL TABLE (TS) OVERFLOW", line);

		return -1;

	}
}

/* Elimina una entrada en la tabla de símbolos (TS). Devuelve 1 si funciona correctamente, -1 en caso de error */
int TS_DelEntry(){

    // Si hay alguna entrada en la tabla de símbolos
    if(TOPE > 0){

		TOPE--;
		return 1;

	}
	else{

		printf("Semantic Error[line %d]: SYMBOL TABLE (TS) EMPTY", line);
		return -1;

	}
}

/* Elimina todas las entradas de la tabla de símbolos del bloque actual y la cabecera del mismo si la tiene. Debe ser llamada al final de cada bloque. Devuelve 1 si funciona correctamente, -1 en caso de error */
int TS_CleanBlock(){

	if (TOPE == 0)
		return -1;

	int ret = -1;			// para el valor de return de la función que indica su comportamiento

    while(TOPE > 0){				 // Mientras que no llegue a la base de la pila
		TOPE--;						 // Nos desplazamos para leer los símbolos ya escritos
		if (TS[TOPE].entry == MARK){ // Si encuentra una entrada con la marca de inicio de bloque
			TOPE--;
			ret = 0;
			break;
		}
		//if (TOPE == 0)
	}

    if (TS[TOPE].entry == FORM_PARAM) {	// Si encuentra un parámetro formal
        TOPE--;
		while(TS[TOPE].entry != FUNCTION && TOPE > 0){	// Mientras que no encuentre la entrada de la función
    		TOPE--;
    	}
	}
	TOPE++;		// Dejamos TOPE en el siguiente lugar al símbolo de tipo FUNCTION

	return ret;

}

// Busca una entrada en la TS de una variable por su identificador o nombre. Devuelve el índice de la entrada encontrada o -1 en caso de no encontrarla
int TS_FindByID(atributos e){

	if (TOPE == 0)
		return -1;

	int i = TOPE - 1;
	int found = 0;

	while (i > 0 && !found) {	/*&& ts[i].entry != MARK*/
		if (TS[i].entry == VAR && strcmp(e.name, TS[i].name) == 0) {
			found = 1;
		} else{
			i--;
		}
	}

	if(!found) {
		//printf("Semantic Error(%d): Ident not declared: %s\n", line, e.name);
		return -1;
	} else {
		return i;
	}

}

// Busca una entrada en la TS de una función por su identificador o nombre. Devuelve el índice de la entrada encontrada o -1 en caso de no encontrarla
int TS_FindByName(atributos e){

	if (TOPE == 0)
		return -1;

	int i = TOPE - 1;
	int found = 0;

	while (i > 0 && !found) {
		if (TS[i].entry == FUNCTION && strcmp(e.name, TS[i].name) == 0) {
			found = 1;
		} else{
			i--;
		}
	}

	if(!found) {
		//printf("Semantic Error(%d): Ident not declared: %s\n", line, e.name);
		return -1;
	} else {
		return i;
	}

}

// Inserta una entrada en la tabla de símbolos de una función o un bloque
void TS_AddMark(){

	entradaTS initBlock;

	initBlock.entry = MARK;
	initBlock.name = "{";
	initBlock.type = NO_ASSIG;
	initBlock.nParams = 0;

	TS_AddEntry(initBlock);

  	/* Si es la cabecera de una función, se añaden a la tabla de símbolos los parámetros de la función como las
	   variables locales de ese bloque */
	if(esFunc == 1){
		int j = TOPE - 2, mark = 0, funct = 0;		// TOPE-2 para leer los parámetros formales de antes de la llave
		while(j > 0 && TS[j].entry == FORM_PARAM){
			if(TS[j].entry == FORM_PARAM) {
				entradaTS newIn;
				newIn.entry = VAR;
				newIn.name = TS[j].name;
				newIn.type = TS[j].type;
				newIn.nParams = TS[j].nParams;
				TS_AddEntry(newIn);

			}
			j--;
		}
	}
}

// Añade una entrada en la tabla de símbolos de una variable local
void TS_AddVar(atributos e){
	int j = TOPE-1;
	int found = 0;

	if(j >= 0 && decVar == 1){		// Caso de declaración de la variable
		while((TS[j].entry != MARK) && (j >= 0) && !found){
			if(strcmp(TS[j].name, e.name) != 0){
				j--;
			}
			else{
				found = 1;
				printf("Semantic Error[linea %d]: Ident already exists: %s\n", line, e.name);
	 		}
		}

		if(!found) {
			entradaTS newIn;
			newIn.entry = VAR;
			newIn.name = e.name;
			newIn.type = globalType;
			newIn.nParams = 0;
			TS_AddEntry(newIn);
		}
	}
}

// Inserta una entrada en la tabla de símbolos de una función
void TS_AddFunction(atributos e){

	entradaTS inFunct;
	inFunct.entry = FUNCTION;
	inFunct.name = e.name;
	inFunct.nParams = 0;		// Luego se actualizarán el número de parámetros
	inFunct.type = e.type;

	currentFunction = TOPE;		// Actualizamos la función actual
	TS_AddEntry(inFunct);
}

// Inserta una entrada en la tabla de símbolos de un parámetro formal
void TS_AddParam(atributos e){
  int j = TOPE - 1, found = 0;
	while((j != currentFunction)  && (!found) ){
		if(strcmp(TS[j].name, e.name) != 0) {
			j--;
		}
		else{
			found = 1;
			printf("Semantic Error[linea %d]: Param already exists: %s\n", line, e.name);
    }
	}

	if(!found) {
		entradaTS newIn;
		newIn.entry = FORM_PARAM;
		newIn.name = e.name;
		newIn.type = globalType;
		newIn.nParams = 0;
		TS_AddEntry(newIn);
	}
}

/*************************************************************
** METODOS PARA EN ANALIZADOR SINTÁCTICO **
**************************************************************/

// Comprueba si el type de la expresión coincide con lo que devuelve la función
void TS_CheckReturn(atributos expr, atributos* res){
  int index = currentFunction;
	if (index > -1) {
		if (expr.type != TS[index].type) {
			printf("Semantic Error[linea %d]: Return type not equal to function type.\n", line);
			return;
		}
		res->type = expr.type;	//REALLY??????????????????????????????
		//return; //ANIADIDO POR MANUEL--GRANDEEEE
	}
	else {
		printf("Semantic Error[linea %d]: Result not declared into function.\n", line);
		return;
	}

}

// Devuelve el identificador
void TS_GetId(atributos id, atributos* res){
	int index = TS_FindByID(id);
	if(index == -1) {
        if(TS[index].entry != FUNCTION)
		    printf("\nSemantic Error[linea %d]: Id not found %s.\n", line, id.name);
	}
	else {
		res->name = strdup(TS[index].name);
		res->type = TS[index].type;
	}
}

// Realiza la comprobación de la llamada a una función
void TS_FunctionCall(atributos id, atributos* res){
	int index = TS_FindByName(id);
	if(index == -1) {
		currentFunction = -1;
		printf("\nSemantic Error[linea %d]: Function: Id not found %s.\n", line, id.name);
  	}
	else {
		if (nParams != TS[index].nParams) {
			printf("Semantic Error[linea %d]: Number of params not valid.\n", line);
		}
		else {
			currentFunction = index;
			res->name = strdup(TS[index].name);
			res->type = TS[index].type;
		}
	}
}

// Realiza la comprobación de cada parámetro de una función
void TS_CheckParam(atributos param, int checkParam){

	int posParam = (currentFunction + TS[currentFunction].nParams) - (checkParam - 1);
	int error = TS[currentFunction].nParams - checkParam + 1;
	if(param.type != TS[posParam].type) {
		printf("Semantic Error[linea %d]: Param type (%d) not valid.\n", line, error);
		return;
	}
}
