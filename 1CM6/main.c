#include <stdio.h>

int main(void){
    int a, b;
    printf("Ingresa a ");scanf("%d",&a);
    printf("Ingresa b ");scanf("%d",&b);

    printf("%d <  %d = %d\n",a,b,a<b);
    printf("%d <= %d = %d\n",a,b,a<=b);
    printf("%d >  %d = %d\n",a,b,a>b);
    printf("%d >= %d = %d\n",a,b,a>=b);
    printf("%d != %d = %d\n",a,b,a!=b);
    printf("%d == %d = %d\n",a,b,a==b);

    return 0;
}
