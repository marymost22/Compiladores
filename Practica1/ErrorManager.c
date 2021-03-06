#include "ErrorManager.h"
#include <stdio.h>

void showError(int errorCode, int numLinea) {
    switch (errorCode) {
        case MISSING_ARGUMENTS:
            printf("Número de argumentos insuficiente.\nSintaxis: ./practica1 <archivoCodigoFuente> <archivoDefiniciones>");
            break;
        case NOT_KEYWORDS_FILE_FOUNDED:
            printf("No se ha encontrado el archivo de palabras clave especificado\n");
            break;
        case NOT_FILE_FOUNDED:
            printf("No se ha encontrado el archivo de código fuente especificado\n");
            break;
        case NOT_CLOSED_COMMENT:
            printf("[ERROR LEXICO - linea %d] \tComentario no cerrado correctamente.\n", numLinea);
            break;
        case NOT_CLOSED_STRING:
            printf("[ERROR LEXICO - linea %d] \tCadena no cerrada correctamente.\n", numLinea);
            break;
        case ILLEGAL_ESCAPED_CHARACTER:
            printf("[ERROR LEXICO - linea %d] \tCaracter escapado ilegal.\n", numLinea);
            break;
        case ILLEGAL_CHARACTER:
            printf("[ERROR LEXICO - linea %d] \tCaracter ilegal.\n", numLinea);
            break;
        case ILLEGAL_LEXEMA_SIZE:
            printf("[ERROR - linea %d] \tLexema supera el tamaño permitido.\n", numLinea);
            break;
        default:
            printf("[ERROR]");
    }
}