#include <stdio.h>
#include <stdlib.h>

int main(void){

    int i, ini, fin, salto;

    printf("Ingresa ini ");scanf("%d",&ini);
    printf("Ingresa fin ");scanf("%d",&fin);
    printf("Ingresa salto ");scanf("%d",&salto);
    salto = abs(salto);

    if(salto == 0){
        printf("Error! No hay conteo");
    }
    else if(ini < fin){
        i=ini;
        while( i <= fin ){
            printf("%d ",i);
            i = i+salto;
        }
    }
    else{
        i=ini;
        while( i >= fin ){
            printf("%d ",i);
            i = i-salto;
        }
    }


    return 0;
}
