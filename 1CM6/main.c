#include <stdio.h>
#include <stdlib.h>

int main(void){

    int i, ini, fin, dec;

    printf("Ingresa ini ");scanf("%d",&ini);
    printf("Ingresa fin ");scanf("%d",&fin);
    printf("Ingresa dec ");scanf("%d",&dec);

    i=ini;
    while( i >= fin ){
        printf("%d ",i);
        i = i-dec;
    }

    return 0;
}
