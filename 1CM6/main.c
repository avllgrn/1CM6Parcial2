#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a=5;
    int b=3;
    printf("Inicialmente: a = %d \tb = %d\n\n",a,b);

    a += b;
    printf("Tras a += b : a = %d \tb = %d\n\n",a,b);

    a -= b;
    printf("Tras a -= b : a = %d \tb = %d\n\n",a,b);

    a *= b;
    printf("Tras a *= b : a = %d \tb = %d\n\n",a,b);

    a /= b;
    printf("Tras a /= b : a = %d \tb = %d\n\n",a,b);

    a %= b;
    printf("Tras a %%= b : a = %d \tb = %d\n\n",a,b);
    system("pause");
    system("cls");

    printf("Inicialmente : a = %d\n\n",a);

    printf("Si se usa ++a: a = %d\n",++a);
    printf("Tras usar ++a: a = %d\n\n",a);

    printf("Si se usa --a: a = %d\n",--a);
    printf("Tras usar --a: a = %d\n\n",a);

    printf("Si se usa a++: a = %d\n",a++);
    printf("Tras usar a++: a = %d\n\n",a);

    printf("Si se usa a--: a = %d\n",a--);
    printf("Tras usar a--: a = %d\n\n",a);

    return 0;
}
