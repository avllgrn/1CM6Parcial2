#include <stdio.h>

int main(void){

    char situacion;

    printf("Ingresa tu situacion ");
    scanf("%c",&situacion);

    if(situacion == 'R'){
        printf("Situacion Regular");
    }
    else{
        if(situacion == 'r'){
            printf("Situacion regular");
        }
        else{
            if(situacion == 'I'){
                printf("Situacion Irregular");
            }
            else{
                if(situacion == 'i'){
                    printf("Situacion irregular");
                }
                else{
                    printf("Situacion Invalida");
                }
            }
        }
    }

    return 0;
}
