#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "misFunciones.h"

float f(float x);

int main(void){
    float x,ini,fin,paso;
    int i;

    printf("Dame ini ");scanf("%f",&ini);
    printf("Dame fin ");scanf("%f",&fin);
    printf("Dame paso ");scanf("%f",&paso);
    printf("\n\n");

    printf("x\t\t| f(x) = sin(x)\n");
    for(i=1;i<30;i=i+1)
        printf("-");
    printf("\n");

    x = ini;
    while(x<=fin){
        printf("%f\t| %f\n",x,f(x));
        x = x+paso;
    }

    return 0;
}

float f(float x){
    return sin(convierteARadianes(x));
}
