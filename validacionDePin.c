#include <stdio.h>
#include <stdlib.h>

    //%d: lee un valor entero
    //%f: lee un valor de punto flotante
    //%c: lee un solo carácter
    //%s: lee una cadena de caracteres
    //%lf: lee un valor de punto flotante de doble precisión

    //%zu: especificador de formato usado en printf para imprimir el valor de un tipo de dato size_t

    //Utilizar el & para apuntar a la direccion de memoria de la variable que queremos modificar su valor



//Ejercicio Validacion de PIN
int main()
{
    //definir variables a utilizar

    int password = 1234;
    int passUser=0;
    int contador=3;

    printf("INGRESE EL PASSWORD PARA ACCEDER\n");
    printf("---------------------------------\n");
    for(int i=0;i<3;i++){

        printf("PASSWORD: ");
        scanf("%d",&passUser);

        if(passUser == password){

            printf("ACCESO CONCEDIDO \n");
            break;
        }
        else{
            contador--;
            printf("ACCESO DENEGADO, intentos restantes: %d \n ",contador);


        }


    }

    return 0;
}
