#include <stdio.h>


int main(void) 
{
    int num01, num02, num03, suma;

    printf("Ingrese un valor: ");
    scanf("%d", &num01);
    printf("Ingrese otro valor: ");
    scanf("%d", &num02);
    printf("Ingrese otro valor: ");
    scanf("%d", &num03);

    suma = num01 + num02 + num03;

    printf("%d + %d + %d = %d", num01, num02, num03, suma);

    suma = num01 > num02 ? printf("numero %d mayor", num01) : printf("numero %d mayor", num02);
    return 0;
}