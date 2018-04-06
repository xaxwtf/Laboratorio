#include <stdio.h>
#include <stdlib.h>
/*declaracion de la funcion o prototipo de la funcion
tipo_de_dato_devuelto identificador(parametros de entrada)
//tipo de dato devuetlos
(int, float, char, void, double, long)
//identificador
nombre representativo:vervo+objeto
//parametro de entrada
declaro una variable por cada parametro(mismas reglas de declaracion de )*/
/***************************************************************************/
int mostrarEIncrementar(int);
int main()
{
    int numero;
    printf("ingrese Un Numero: ");
    scanf("%d",&numero);
    /*llamada de funcion*/
    mostrarEIncrementar(numero);/*numero PARAMETRO ACTUAL*/
    printf("\nEl Numero Incrementado es : %d",numero);
    return 0;
}
/*implementacion o desarollo de la funcion*/
int mostrarEIncrementar(int numero)/*"numero" PARAMETRO FORMAL*/
{
    int incremento;
    printf("El Numero ingresado es : %d", numero );
    incremento=numero+10;
    return incremento;
    /*printf("El Numero Ingresado es : %d", numero);/visibilidad/alcance dentro de la funcion*/
}
