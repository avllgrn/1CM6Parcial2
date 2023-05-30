#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, sumaAcumulada=0;//Si no se inicializa en cero, acumulara basura

    do{
        printf("Dame n ");
        scanf("%d",&n);

        sumaAcumulada = sumaAcumulada + n;
    }while(n != 0);

    printf("Suma acumulada = %d",sumaAcumulada);

    return 0;
}
