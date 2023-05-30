#include <stdio.h>

int main(void){
    int n,i;
    printf("Ingresa n ");
    scanf("%d",&n);

    printf("%d ",n);
    i=1;
    while(i<=n){
        printf("*");
        i = i+1;
    }

    return 0;
}
