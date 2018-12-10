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
int line = 1;					// Línea del fichero que se está analizando
long int TOPE = 0 ;				// Tope de la pila, indica en cada momento la siguiente posición en la pila TS para insertar una entrada
int decVar = 0;					/* Indica si las variables se están utilizando (decVar=0), si se están declarando (decVar=1)
			   		            o si se llaman desde una expresión (decVar=2)*/
int decParam = 0;				// Indica si se están declarando parámetros formales en una función
int esFunc = 0;				/* Indica el comienzo de una función con 0 si es un bloque y 1 si
						   	   es la cabecera de la función */
tipoDato TipoTmp = NO_ASSIG;	// Tipo de dato actual para asignarlo a las entradas de la TS
int nParams = 0;
int currentFunction = -1;		// Indica la posición (índice) en la TS de la función actual

/* Guarda el type o tipo de dato del atributo leido */
void getType(atributos value){

    TipoTmp = value.type;
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

		//printf("New Entry: %s TipoEntrada=%d TipoDato=%d numParams=%d \n", TS[TOPE].name, TS[TOPE].entry, TS[TOPE].type, TS[TOPE].nParams);

        // Actualizamos el número de entradas
		TOPE++;

		return 1;
	}

	else{	// Si está completa

		printf("MAX_ENTRIES ERR[line %d]: SYMBOL TABLE (TS) OVERFLOW", line);
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

		printf("NO_ENTRIES ERR[line %d]: EMPTY SYMBOL TABLE (TS)", line);
		return -1;
	}
}

/* Elimina todas las entradas de la tabla de símbolos del bloque actual y la cabecera del mismo si la tiene. Debe ser llamada al final de cada bloque. Devuelve 1 si funciona correctamente, -1 en caso de error */
int TS_CleanBlock(){

	int ret = -1;			// para el valor de return de la función que indica su comportamiento

	if (TOPE == 0)			// Si la TS está vacía
		return 1;

    while(TOPE > 0){				 // Mientras que no llegue a la base de la pila buscamos el inicio del bloque en el que estamos
		TOPE--;						 // Nos desplazamos desde la entrada más reciente a las anteriores para leer las entradas del bloque
  		//printf("Del Entry: %s TipoDato %d\n", TS[TOPE].name, TS[TOPE].type);

		if (TS[TOPE].entry == MARK){ // Si encuentra una entrada con la marca de inicio de bloque
			TOPE--;
			ret = 1;
			break;
		}
		//if (TOPE == 0)
	}

    while (TS[TOPE].entry == FORM_PARAM) {					// Mientras que encuentre parámetros formales
  		//printf("Del Entry FORM_PARAMS: %s TipoDato %d\n", TS[TOPE].name, TS[TOPE].type);
        TOPE--;
	}
	TOPE++;		// Dejamos TOPE en el siguiente lugar al símbolo de tipo FUNCTION

	return ret;

}

// -*-*-*-*-*-*-*-*-*-*-*-* MAYBE SOBRAN -*-*-*-*-*-*-*-*-*-*-*-*

// Busca una entrada en la TS de una variable por su identificador o nombre. Devuelve el índice de la entrada encontrada o -1 en caso de no encontrarla
int TS_FindByID(atributos e){

	int i = TOPE - 1;
	int found = 0;

	if (TOPE == 0)
		return -1;

	while (i > 0 && found == 0) {	/*&& ts[i].entry != MARK*/
		if (TS[i].entry == VAR && strcmp(e.name, TS[i].name) == 0) {
			found = 1;
		} else{
			i--;
		}
	}

	if(found == 0) {
		//printf("Semantic Error(%d): Ident not declared: %s\n", line, e.name);
		return -1;
	} else {
		printf("ENCONTRADO %s en %d \n", e.name, i);
		return i;
	}

}

// Busca una entrada en la TS de una función por su identificador o nombre. Devuelve el índice de la entrada encontrada o -1 en caso de no encontrarla
int TS_FindByName(atributos e){

	int i = TOPE - 1;
	int found = 0;

	if (TOPE == 0)
		return -1;

	while (i > 0 && found == 0) {
		if (TS[i].entry == FUNCTION && strcmp(e.name, TS[i].name) == 0) {
			found = 1;
		} else{
			i--;
		}
	}

	if(found == 0) {
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

  	/* Si es la cabecera de una función, se añaden a la tabla de símbolos los parámetros/argumentos de la función como
	   variables locales de ese bloque al fin de poder ser utilizadas  */
	if(esFunc == 1){
		int j = TOPE - 2;		// TOPE-2 para leer los parámetros formales de antes de la llave
		while(j > 0 && TS[j].entry == FORM_PARAM){
			if(TS[j].entry == FORM_PARAM) {
				entradaTS Param;
				Param.entry = VAR;
				Param.name = TS[j].name;
				Param.type = TS[j].type;
				Param.nParams = TS[j].nParams;
				TS_AddEntry(Param);

			}
			j--;
		}
	}
}

// Añade una entrada en la tabla de símbolos de una variable local
void TS_AddVar(atributos e){
	int j = TOPE-1;
	int found = 0;

	if(j >= 0 && decVar == 1){									// Caso de declaración de la variable
		while( TS[j].entry != MARK && j >= 0 && found == 0){	// Busca una entrada con el mismo nombre dentro del bloque
			if(strcmp(TS[j].name, e.name) != 0){
				j--;
			}
			else{
				found = 1;
				printf("DECLARATION ERR[line %d]: ID already exists: %s\n", line, e.name);
	 		}
		}

		if(found == 0) {
			entradaTS newIn;
			newIn.entry = VAR;
			newIn.name = e.name;
			newIn.type = TipoTmp;
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
	inFunct.type = TipoTmp;

	currentFunction = TOPE;		// Actualizamos la función actual
	TS_AddEntry(inFunct);
}

// Inserta una entrada en la tabla de símbolos de un parámetro formal
void TS_AddParam(atributos e){
  int j = TOPE - 1, found = 0;
	while( j != currentFunction && found == 0 ){		// Comprobamos si ya existe un argumento de esa función con el mismo nombre
		if(strcmp(TS[j].name, e.name) != 0) {
			j--;
		}
		else{
			found = 1;
			printf("DECLARATION ERR[line %d]: Param already exists: %s\n", line, e.name);
    }
	}

	if(found == 0) {
		entradaTS newIn;
		newIn.entry = FORM_PARAM;
		newIn.name = e.name;
		newIn.type = TipoTmp;
		newIn.nParams = 0;
		TS_AddEntry(newIn);
	}
}

// Actualiza el número de parámetros de la función
void TS_UpdateNParams(){

    TS[currentFunction].nParams += 1;

}

/*************************************************************
** METODOS PARA EN ANALIZADOR SINTÁCTICO **
**************************************************************/

// Comprueba si el type de la expresión coincide con lo que devuelve la función
void TS_CheckReturn(atributos expr, atributos* res){
  int index = currentFunction;

	if (index > -1) {
		if ( expr.type != TS[index].type) {
			printf("RETURN ERR[line %d]: Return type %d not equal to function type %d.\n", line, expr.type, TS[index].type);
			return;
		}
		//res->type = expr.type;	//REALLY??????????????????????????????
		//return; //ANIADIDO POR MANUEL--GRANDEEEE
	}
	else {
		printf("RETURN ERR[line %d]: Result not declared into function.\n", line);
		return;
	}

}

// Devuelve el identificador
void TS_GetId(atributos id, atributos* res){
	int index = TS_FindByID(id);
	if(index == -1) {
        if(TS[index].entry != FUNCTION)
		    printf("\nSEARCH ERR[line %d]: Id not found %s.\n", line, id.name);
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
		printf("\nSEARCH ERR[line %d]: Function: Id not found %s.\n", line, id.name);
  	}
	else {
		if (nParams != TS[index].nParams) {
			printf("ARGS ERR[line %d]: Number of params not valid.\n", line);
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
		printf("ARGS ERR[line %d]: Param type (%d) not valid.\n", line, error);
		return;
	}
}

void printTS(){

    int j = 0;
	char *t, *e;

	printf("--------------------------------\n");
	while(j <= TOPE-1) {
		if(TS[j].entry == 0) { e = "MARK"; }
		if(TS[j].entry == 1) { e = "FUNCTION"; }
		if(TS[j].entry == 2) { e = "VAR"; }
		if(TS[j].entry == 3) { e = "FORM_PARAM"; }

		if(TS[j].type == 0) { t = "INT"; }
		if(TS[j].type == 1) { t = "DOUBLE"; }
		if(TS[j].type == 2) { t = "CHAR"; }
		if(TS[j].type == 3) { t = "BOOLEAN"; }
		if(TS[j].type == 4) { t = "LIST_INT"; }
		if(TS[j].type == 5) { t = "LIST_DOUBLE"; }
		if(TS[j].type == 6) { t = "LIST_CHAR"; }
		if(TS[j].type == 7) { t = "LIST_BOOLEAN"; }
    if(TS[j].type == 8) { t = "SIZE"; }
    if(TS[j].type == 9) { t = "NO_ASSIG"; }
		printf("----ELEMENTO %d-----------------\n", j);
		printf("-Entrada: %-12s", e);
		printf("-Lexema: %-12s", TS[j].name);
		printf("-type: %-10s", t);
		printf("-nParam: %-4d", TS[j].nParams);
		j++;
	}
	printf("--------------------------------\n");

}

// Muestra un atributo recibido
void printAttr(atributos e, char *msg){

    char *t;

    if(e.type == 0) { t = "INT"; }
		if(e.type == 1) { t = "DOUBLE"; }
		if(e.type == 2) { t = "CHAR"; }
		if(e.type == 3) { t = "BOOLEAN"; }
		if(e.type == 4) { t = "LIST_INT"; }
		if(e.type == 5) { t = "LIST_DOUBLE"; }
		if(e.type == 6) { t = "LIST_CHAR"; }
		if(e.type == 7) { t = "LIST_BOOLEAN"; }
    if(e.type == 8) { t = "SIZE"; }
    if(e.type == 9) { t = "NO_ASSIG"; }
	printf("------%s-------------------------\n", msg);
	printf("-Atributos: %-4d", e.attr);
	printf("-Lexema: %-12s", e.name);
	printf("-type: %-10s", t);
	printf("-------------------------------\n");

}
