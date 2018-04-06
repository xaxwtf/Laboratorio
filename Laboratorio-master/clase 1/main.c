#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1=9;
    float numero2;
    char letra;
    float suma;
    printf("Ingrese un numero  entero:");
    scanf("%d", & numero1);
    printf("Ingrese UN numero con Coma: ");
    scanf("%f", & numero2);
    printf("indique una letra: ");
    letra=getche();
    scanf("%c",&letra);
    suma= numero1+numero2;
    printf("el Numero entero Es: %d y el numero flotante es: %.0f",numero1,numero2);
    printf("\n resultado de la suma es de: %.2f",suma);
    printf("\n la letra indicada es: %c",letra);
    return 0;
}
