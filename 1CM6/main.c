#include <stdio.h>
#include "misFunciones.h"

int main(void){
    int a, b;

    printf("Ingresa a ");scanf("%d",&a);
    printf("Ingresa b ");scanf("%d",&b);

    printf("%d <  %d = %d\n",a,b,menorQue(a,b));
    printf("%d <= %d = %d\n",a,b,menorIgual(a,b));
    printf("%d >  %d = %d\n",a,b,mayorQue(a,b));
    printf("%d >= %d = %d\n",a,b,mayorIgual(a,b));
    printf("%d != %d = %d\n",a,b,diferenteDe(a,b));
    printf("%d == %d = %d\n",a,b,IdenticoA(a,b));

    return 0;
}
