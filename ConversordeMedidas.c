#include <stdio.h>
#include <stdlib.h>

int main()
{
    //definir variables a utilizar

    float metros=0.0;
    int milimetros=0;


    //Conversor de metros a mm version 1

    //%d: lee un valor entero
    //%f: lee un valor de punto flotante
    //%c: lee un solo carácter
    //%s: lee una cadena de caracteres
    //%lf: lee un valor de punto flotante de doble precisión
    //Utilizar el & para apuntar a la direccion de memoria de la variable que queremos modificar su valor

    printf(" CONVERSOR DE METROS A MILIMETROS \n");
    printf("-------------------------------------\n");

    printf("Ingrese los metros a transformar \n");
    scanf("%f", &metros);
    //calcular

    milimetros= metros * 1000;

    printf("-------------------------------------\n");
    printf("METROS: %f \n",metros);
    printf("m a mm: %d \n",milimetros);
    printf("MILIMETROS: %d \n",milimetros);



    return 0;
}
