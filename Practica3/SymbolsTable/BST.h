#ifndef PRACTICA1_BST_H
#define PRACTICA1_BST_H

#include <stdbool.h>
#include "SymbolsTable.h"

typedef symbolInput tipoelem;

typedef char *tipoclave;

typedef struct celda *abb;

void crea(abb *A);

void destruye(abb *A);

bool esVacio(abb A);

tipoelem * inserta(abb *A, tipoelem E);

tipoelem suprime_min(abb *A);

void suprime(abb *A, tipoelem E);

bool esMiembro(abb A, tipoelem E);

abb izq(abb A);

abb der(abb A);

void info(abb A, tipoelem *E);

tipoelem * buscaNodo(abb A, tipoclave cl);

void modifica(abb *A, tipoclave cl, tipoelem nodo);

#endif //PRACTICA1_BST_H
