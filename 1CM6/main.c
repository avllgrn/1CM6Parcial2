#include <stdio.h>
#include <math.h>

int main(void){
    int i, n;
    float x, s;
    //ln(1 + x), para |x| < 1

    printf("Dame x ");scanf("%f",&x);
    printf("Dame n ");scanf("%d",&n);

    for(i=1, s=0; i<=n; i++){
        printf("s=%f\ti=%d\n",s,i);
        if(i%2 != 0)
            s = s + pow(x,i)/i;
        else
            s = s - pow(x,i)/i;
    }
    printf("\n\nln(1 + %f) = %f\n",x,s);

    return 0;
}
