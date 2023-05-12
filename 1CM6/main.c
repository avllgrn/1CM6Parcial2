#include <stdio.h>

int main(void){

    int edad;

    printf("Ingresa tu edad ");
    scanf("%d",&edad);

    if(edad < 0){
        printf("Error! Edad negativa");
    }
    else if(edad < 18){
        printf("NO pasas ='^(");
    }
    else if(edad < 130){
        printf("Pase Ud.! =^)");
    }
    else{
        printf("Error! Edad muy grande");
    }

    return 0;
}
