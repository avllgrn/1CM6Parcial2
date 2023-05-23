#include <stdio.h>
#include <stdlib.h>

int main(void){

    int i, ini, fin, inc;

    printf("Ingresa ini ");scanf("%d",&ini);
    printf("Ingresa fin ");scanf("%d",&fin);
    printf("Ingresa inc ");scanf("%d",&inc);

    i=ini;
    while( i <= fin ){
        printf("%d ",i);
        i = i+inc;
    }

    return 0;
}
