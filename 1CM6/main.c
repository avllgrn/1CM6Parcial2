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
        else if(y==0){
            printf("X+");
        }
        else{
            printf("Cuadrante IV");
        }
    }
    else if(x==0){
        if(y>0){
            printf("Y+");
        }
        else if(y==0){
            printf("Origen");
        }
        else{
            printf("Y-");
        }
    }
    else{
        if(y>0){
            printf("Cuadrante II");
        }
        else if(y==0){
            printf("X-");
        }
        else{
            printf("Cuadrante III");
        }
    }

    return 0;
}
