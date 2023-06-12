#include <stdio.h>
#include <math.h>

float convierteARadianes(float xGrad);
long long factorial(int n);

int main(void){
    int i, n, t;
    float x, xRad, s;

    printf("Dame x ");scanf("%f",&x);
    printf("Dame n ");scanf("%d",&n);
    xRad = convierteARadianes(x);

    //La serie comienza con i=1
    for(i=1, t=1, s=0; t<=n; t++, i = i+2){
        //printf("s = %f\ti=%d\n",s,i);
        if(t%2 != 0)
            s = s + pow(xRad,i)/factorial(i);
        else
            s = s - pow(xRad,i)/factorial(i);
    }
    printf("\n\nsen(%f) = %f\n\n",x,s);

    //La serie comienza con i=0
    for(i=0, t=1, s=0; t<=n; t++, i = i+2){
        //printf("s = %f\ti=%d\n",s,i);
        if(t%2 != 0)
            s = s + pow(xRad,i)/factorial(i);
        else
            s = s - pow(xRad,i)/factorial(i);
    }
    printf("\n\ncos(%f) = %f\n\n",x,s);
    return 0;
}

float convierteARadianes(float xGrad){
    return xGrad * M_PI / 180;
}
long long factorial(int n){
    int i;
    long long f=1;

    for(i=2; i<=n; i++)
        f *= i;

    return f;
}
