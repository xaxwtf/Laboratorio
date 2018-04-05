#include <stdio.h>
#include <stdlib.h>
int pedirEntero(char[], int, int);/*char^[] ES LO MAS PARECIDO A UN STRING(CADENA DE CARACTERES)*/
int validarEntero(int dato, int min, int max);
int main()
{
    int edad;//18-60
    int legajo;//1-1000
    int nota;//1-10
    edad=pedirEntero("indique su edad: ",18,60);
    legajo=pedirEntero("Ingrese el Legajo: ",1,1000);
    nota=pedirEntero("ingrese La nota: ",1,10);
    printf("La edad es : %d , El legajo es: %d Y la nota es: %d",edad,legajo,nota);

    return 0;
}
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
