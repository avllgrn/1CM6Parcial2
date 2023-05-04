#include <stdio.h>
#include <math.h>

int main(void){

    float a,b,c,discriminante,x1,x2;

    //1. Pide dato(s)
    printf("Ingresa a ");
    scanf("%f",&a);
    printf("Ingresa b ");
    scanf("%f",&b);
    printf("Ingresa c ");
    scanf("%f",&c);

    discriminante = pow(b,2)-4*a*c;

    if(discriminante < 0){//Si la condicion es verdadera, no hagas 2  ni 3
        printf("\nError! Raices imaginarias...\n");
    }
    else{
        if(a==0){//Si la condicion es verdadera, no hagas 2  ni 3
            printf("\nError! Raices indeterminadas...\n");
        }
        else{
            //2. Calcula formula(s)
            x1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
            x2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
            //3. Muestra resultado(s)
            printf("\nx1 = %f\nx2 = %f\n",x1,x2);
        }
    }

    return 0;
}
