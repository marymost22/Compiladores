#ifndef PRACTICA3_SYMBOLSTABLE_H
#define PRACTICA3_SYMBOLSTABLE_H

#include <stdbool.h>

typedef double (*func_t) (double);

/* Tipo de datos para enlaces en la cadena de sımbolos. */
struct symrec{
    char *name;                 // nombre del sımbolo
    bool initialized;
    int type;                   // tipo del sımbolo: bien VAR, FNCT, CONS
    union {
        double var;             // valor de una VAR
        double (*fnctptr)();    // valor de una FNCT
    } value;
};



typedef struct symrec symbolInput;

/* Funcion que incializa la tabla de símbolos
 */
void initSymbolsTable();

/* Función que inserta un lexema en la tabla de simbolos, asociandole
 * un componente lexico y el numero de linea en el que se encontró.
 * */
symbolInput * insert(char *name, int type) ;

/* Función que devuelve la entrada de la tabla de símbolos correspondiente
 * al lexema que se para por parametro. Si el lexema no está en la tabla
 * de simbolos, devuelve NULL.
 */
symbolInput* search(char *name)   ;

/* Funcion que podria modificar el contenido de una entrada de la tabla
 * de símbolos dada. NO IMPLEMENTADA PARA ESTA PRACTICA.
 */
void modify();

/* Función que libera los recursos correspondientes a la tabla de símbolos
 */
void destroySymbolsTable();

/* Función que imprime, por orden alfabético, el contenido de la tabla de
 * simbolos en la forma [lexema - componente lexico]
 */
void printSymbolsTable();

/* Función que imprime, por orden alfabético, el contenido de la tabla de
 * simbolos en la forma [lexema - componente lexico] segun el tipo que
 * buscamos especificamente
 */
void printSymbolByType(int type);

#endif //PRACTICA3_SYMBOLSTABLE_H
