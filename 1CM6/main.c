#include <stdio.h>

int main(void){
    int i, n, s;
    //1-2+3-4+5-6+7-8+9-10 + ... n

    printf("Dame n ");scanf("%d",&n);

    for(i=1, s=0; i<=n; i++){
        printf("s=%d i=%d\n",s,i);
        s = s+i;
    }
    printf("\n\ns=%d\n",s);

    return 0;
}
