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

//Ejercicio tablas de multiplicar

int main()
{
    //definir variables a utilizar

    int n,i = 0;
    //int resultado=0;

    printf(" VISUALIZAR TABLA DE MULTIPLICAR \n");
    printf("------------------------------------- \n");
    printf(" INGRESE EL N° para visualizar su tabla \n ");
    printf(" Tabla del... ");
    scanf("%d",&n);

    printf("\n");

    for(i;i<10;i++){

        //para imprimir las variables se define el dato salida en este caso int %d * %d = %d luego las variables que definen esos datos
        printf("%d * %d = %d\n", n, i+1, n * i+1);
        printf("\n");
        printf("%d valor i = ", i);

    }



    return 0;
}
