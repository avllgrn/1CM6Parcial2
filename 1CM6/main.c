#include <stdio.h>
#include <stdlib.h>

int main(void){

    float i, ini, fin, salto;

    printf("Ingresa ini ");scanf("%f",&ini);
    printf("Ingresa fin ");scanf("%f",&fin);
    printf("Ingresa salto ");scanf("%f",&salto);
    salto = fabs(salto);

    if(salto == 0){
        printf("Error! No hay conteo");
    }
    else if(ini < fin){
        i=ini;
        while( i <= fin ){
            printf("%f ",i);
            i = i+salto;
        }
    }
    else{
        i=ini;
        while( i >= fin ){
            printf("%f ",i);
            i = i-salto;
        }
    }


    return 0;
}
