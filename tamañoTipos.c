#include <stdio.h>
#include <stdlib.h>


    //%d: lee un valor entero
    //%f: lee un valor de punto flotante
    //%c: lee un solo carácter
    //%s: lee una cadena de caracteres
    //%lf: lee un valor de punto flotante de doble precisión

    //%zu: especificador de formato usado en printf para imprimir el valor de un tipo de dato size_t

    //Utilizar el & para apuntar a la direccion de memoria de la variable que queremos modificar su valor


int main()
{
    //definir variables a utilizar

    int tipoEntero;
    float tipoFloat;
    char tipoChar;
    double tipoDoble;
    short tipoShort;
    long tipoLong;

    //Mostrar el tamaño de los tipos de variable
    //Se puede usar directamente el tipo dentro del sizeof o usando una variable

    //Tamaño de tipos


    printf("TAMAÑO EN BYTES DE DIFERENTES TIPOS DE DATO\n");
    printf("------------------------------------\n");
    printf("INT : %zu\n",sizeof(tipoEntero));
    printf("FLOAT : %zu\n",sizeof(tipoFloat));
    printf("CHAR : %zu\n",sizeof(tipoChar));
    printf("DOUBLE : %zu\n",sizeof(tipoDoble));
    printf("SHORT : %zu\n",sizeof(tipoShort));
    printf("LONG : %zu\n",sizeof(tipoLong));

    printf("------------------------------------\n");




    return 0;
}
