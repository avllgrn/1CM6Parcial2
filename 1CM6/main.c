#include <stdio.h>

int main(void){

    float x, y;

    printf("Ingresa x ");
    scanf("%f",&x);
    printf("Ingresa y ");
    scanf("%f",&y);

    if(x>0){
        if(y>0){
            printf("Cuadrante I");
        }
        else{
            printf("Cuadrante IV");
        }
    }
    else{
        if(y>0){
            printf("Cuadrante II");
        }
        else{
            printf("Cuadrante III");
        }
    }

    return 0;
}
