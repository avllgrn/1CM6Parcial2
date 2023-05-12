#include <stdio.h>

int main(void){

    int edad;

    printf("Ingresa tu edad ");
    scanf("%d",&edad);

    if(edad >=130){
        printf("Error! Edad muy grande");
    }
    else{
        if(edad >= 18){
            printf("Pase Ud.! =^)");
        }
        else{
            if(edad >= 0){
                printf("NO pasas ='^(");
            }
            else{
                printf("Error! Edad negativa");
            }
        }
    }

    return 0;
}
