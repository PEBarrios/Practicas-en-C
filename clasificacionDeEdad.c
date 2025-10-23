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

//Ejercicio Clasificación de Edad

int main()
{
    //definir variables a utilizar

    int edad;

    printf(" CLASIFICACION DE EDAD \n");
    printf("------------------------- \n");
    printf("Ingrese la edad: ");
    scanf("%d",&edad);

    printf("------------------------- \n");

    if(edad > 0 && edad <= 12){
        printf("Pertenece al rango NIÑO \n");
    }
    else if(edad >12 && edad < 18)
    {
        printf("Pertenece al rango ADOLESCENTE \n");
    }
    else if(edad > 17 && edad < 66){
        printf("Pertenece al rango ADULTO \n");
    }
    else{
        printf("Pertenece al rango MAYOR \n");
    }

    return 0;
}
