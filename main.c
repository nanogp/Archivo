#include <stdio.h>
#include <stdlib.h>
#include "Archivo.h"
#include "d:\github\ToolboxPunteros\General.h"

int main()
{

    char archivoBuffer[1000];
    char archivoRuta[255] = "d:\\github\\Archivo\\prueba.txt";

    //pedirString((char*)&archivoBuffer, "Ingresar texto pa'larchivo: ");
    //archivoAbrirYEscribir(archivoRuta, archivoBuffer);

    archivoLeerYCerrar(archivoRuta, archivoBuffer, 255);
    printf("%s",archivoBuffer);

    return 0;
}
