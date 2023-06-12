#include <stdio.h>
#include <math.h>

int main(void){
    int i, n;
    float x, s;
    //-ln(1 - x), para |x| < 1

    printf("Dame x ");scanf("%f",&x);
    printf("Dame n ");scanf("%d",&n);

    for(i=1, s=0; i<=n; i++){
        printf("s=%f i=%d\n",s,i);
        s = s+pow(x,i)/i;
    }
    printf("\n\n-ln(1 - %f) = %f\n",x,s);

    return 0;
}
