#include "Funciones.h"
#include <stdio.h>

int pedirEntero(char mensaje[], int min, int max)
{
    int numero;
    printf("%s",mensaje);/*%s es para llamar una cadena*/
    scanf("%d",&numero);
   /* while(numero<min||numero>max)
    {
        printf("error: %s",mensaje);
        scanf("%d",&numero);
    }*/
    numero=validarEntero( numero,  min,  max, mensaje);

    return numero;

}
int validarEntero(int dato, int min, int max, char mensaje[])
{
    while(dato<min||dato>max)
    {
        printf("Error:" );
        scanf("%d",&dato);
    }
    return dato;
}

