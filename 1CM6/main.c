#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void contadorDe1a10(void);
void contadorDe1aN(void);
void contadorDeIniaFin(void);
void acumuladorDe1a10(void);
void acumuladorDe1aN(void);
void acumuladorDeIniaFin(void);
void acumuladorAditivoDeX(void);
void acumuladorMultiplicativoDeX(void);
void factorialDeN(void);
int factorial(int n);
void acumuladorDeXaLaI(void);
void acumuladorDeXaLaIEntreI(void);
void acumuladorDeXaLaIEntreFactorialDeI(void);

int main(void){

    contadorDe1a10();
    system("pause");
    system("cls");
    contadorDe1aN();
    system("pause");
    system("cls");
    contadorDeIniaFin();
    system("pause");
    system("cls");
    acumuladorDe1a10();
    system("pause");
    system("cls");
    acumuladorDe1aN();
    system("pause");
    system("cls");
    acumuladorDeIniaFin();
    system("pause");
    system("cls");
    acumuladorAditivoDeX();
    system("pause");
    system("cls");
    acumuladorMultiplicativoDeX();
    system("pause");
    system("cls");
    factorialDeN();
    system("pause");
    system("cls");
    acumuladorDeXaLaI();
    system("pause");
    system("cls");
    acumuladorDeXaLaIEntreI();
    system("pause");
    system("cls");
    acumuladorDeXaLaIEntreFactorialDeI();

    return 0;
}

void contadorDe1a10(void){
    int i;
    for(i=0; i<=10; i++)
        printf("i = %d\n",i);
}
void contadorDe1aN(void){
    int i,n;
    printf("Ingresa n ");scanf("%d",&n);
    for(i=0; i<=n; i++)
        printf("i = %d\n",i);
}
void contadorDeIniaFin(void){
    int i,ini,fin;
    printf("Ingresa ini ");scanf("%d",&ini);
    printf("Ingresa fin ");scanf("%d",&fin);
    for(i=ini; i<=fin; i++)
        printf("i = %d\n",i);
}
void acumuladorDe1a10(void){
    int i;
    int s;
    for(i=0, s=0; i<=10; i++){
        printf("s = %d\ti = %d\n",s,i);
        s = s + i;
    }
    printf("\n\ns = %d\n\n",s);
}
void acumuladorDe1aN(void){
    int i,n;
    int s;
    printf("Ingresa n ");scanf("%d",&n);
    for(i=0, s=0; i<=n; i++){
        printf("s = %d\ti = %d\n",s,i);
        s = s + i;
    }
    printf("\n\ns = %d\n\n",s);
}
void acumuladorDeIniaFin(void){
    int i,ini,fin;
    int s;
    printf("Ingresa ini ");scanf("%d",&ini);
    printf("Ingresa fin ");scanf("%d",&fin);
    for(i=ini, s=0; i<=fin; i++){
        printf("s = %d\ti = %d\n",s,i);
        s = s + i;
    }
    printf("\n\ns = %d\n\n",s);
}
void acumuladorAditivoDeX(void){
    int i,n;
    float x,s;
    printf("Ingresa x ");scanf("%f",&x);
    printf("Ingresa n ");scanf("%d",&n);
    for(i=1, s=0; i<=n; i++){
        printf("s = %f\ti = %d\n",s,i);
        s = s + x;
    }
    printf("\n\ns = %f\n\n",s);
}
void acumuladorMultiplicativoDeX(void){
    int i,n;
    float x,p;
    printf("Ingresa x ");scanf("%f",&x);
    printf("Ingresa n ");scanf("%d",&n);
    for(i=1, p=1; i<=n; i++){
        printf("p = %f\ti = %d\n",p,i);
        p = p * x;
    }
    printf("\n\np = %f\n\n",p);
}
void factorialDeN(void){
    int n;
    printf("Ingresa n ");scanf("%d",&n);
    printf("\n\n%d! = %d\n\n",n,factorial(n));
}
int factorial(int n){
    int i;
    int f;
    for(i=1, f=1; i<=n; i++){
        printf("f = %d\ti = %d\n",f,i);
        f = f * i;
    }
    return f;
}
void acumuladorDeXaLaI(void){
    int i,n;
    float x,s;
    printf("Ingresa x ");scanf("%f",&x);
    printf("Ingresa n ");scanf("%d",&n);
    for(i=0, s=0; i<=n; i++){
        printf("s =%f\ti = %d\n",s,i);
        s = s + pow(x,i);
    }
    printf("\n\ns = %f\n\n",s);
}
void acumuladorDeXaLaIEntreI(void){
    int i,n;
    float x,s;
    printf("Ingresa x ");scanf("%f",&x);
    printf("Ingresa n ");scanf("%d",&n);
    for(i=1, s=0; i<=n; i++){
        printf("s =%f\ti = %d\n",s,i);
        s = s + pow(x,i)/i;
    }
    printf("\n\ns = %f\n\n",s);
}
void acumuladorDeXaLaIEntreFactorialDeI(void){
    int i,n;
    float x,s;
    printf("Ingresa x ");scanf("%f",&x);
    printf("Ingresa n ");scanf("%d",&n);
    for(i=0, s=0; i<=n; i++){
        printf("s =%f\ti = %d\n",s,i);
        s = s + pow(x,i)/factorial(i);
    }
    printf("\n\ns = %f\n\n",s);
}
