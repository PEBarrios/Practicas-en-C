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

//Ejercicio conteo regresivo
int main()
{
    //definir variables a utilizar

    int cont=0, valor=10;

    //condicion while mientras el valor encerrado sea verdadero continua el conteo ciclico
    while(cont != 11){

        if(cont == 0){

            printf("%d ...\n",valor);
            valor--;
            cont++;

        }
        else if(cont == 10){

            printf("%d ...\n",valor);
            printf("¡LANZAMIENTO!\n");
            valor--;
            cont++;

        }
        else{
            printf("%d ...\n",valor);
            valor--;
            cont++;
        }

    }

    return 0;
}
