#include <stdio.h>


int main(void) 
{
    int num01, num02, suma, resta, mult, div;

    printf("Ingrese un valor: ");
    scanf("%d", &num01);
    printf("Ingrese otro valor: ");
    scanf("%d", &num02);

    suma = num01 + num02;
    resta = num01 - num02;
    mult = num01 * num02;
    div = num01/num02;

    printf("la suma es: %d + %d = %d ",num01,num02,suma);
    printf("la resta es: %d - %d = %d ",num01,num02,resta);
    printf("la multiplicacion es: %d * %d = %d ",num01,num02,mult);
    printf("la division es: %d / %d = %d ",num01,num02,div);
   
    return 0;
}