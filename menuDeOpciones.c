#include <stdio.h>
#include <stdlib.h>

    //%d: lee un valor entero
    //%f: lee un valor de punto flotante
    //%c: lee un solo carácter
    //%s: lee una cadena de caracteres
    //%lf: lee un valor de punto flotante de doble precisión

    //%zu: especificador de formato usado en printf para imprimir el valor de un tipo de dato size_t

    //Utilizar el & para apuntar a la direccion de memoria de la variable que queremos modificar su valor

    // Operador modulo % si se hace una division por x numero calcula el residuo de esa division

//Ejercicio menu de opciones

int main()
{
    //definir variables a utilizar

    char opc;

    printf("MENU DE OPCIONES \n");
    printf("----------------------- \n");
    printf(" A) OPCION A \n");
    printf(" B) OPCION B \n");
    printf(" C) OPCION C \n");
    printf("----------------------- \n");

    printf("OPCION: ");
    scanf("%c",&opc);

    switch(opc){

        case 'A':
            printf("Elegiste la opcion A \n");
        break;
        case 'B':
            printf("Elegiste la opcion B \n");
        break;
        case 'C':
            printf("Elegiste la opcion C \n");
        break;
        default:
            printf("Opcion invalida \n");
        break;

    }

    return 0;
}
