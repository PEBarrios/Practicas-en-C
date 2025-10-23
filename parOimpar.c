#include <stdio.h>
#include <stdlib.h>

    //%d: lee un valor entero
    //%f: lee un valor de punto flotante
    //%c: lee un solo carácter
    //%s: lee una cadena de caracteres
    //%lf: lee un valor de punto flotante de doble precisión

    //%zu: especificador de formato usado en printf para imprimir el valor de un tipo de dato size_t

    //Utilizar el & para apuntar a la direccion de memoria de la variable que queremos modificar su valor

    // OPERADOR MODULO % si se hace una division por x numero calcula el residuo de esa division

//Ejercicio Par o impar

int main()
{
    //definir variables a utilizar

    int n;

    printf(" PAR O IMPAR \n");
    printf("--------------------------------- \n");

    printf(" Ingrese un numero: ");
    scanf("%d",&n);

    printf("--------------------------------- \n");

    if( n%2 == 0){
        printf("ES PAR \n");
    }
    else{
        printf("ES IMPAR \n");
    }

    return 0;
}
