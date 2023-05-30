#include <stdio.h>

int main(void){
    int i,j,k;

    for(i=0,j=5,k=100; k>0 ; i=i+1,j=j+5,k=k-10)
        printf("i=%d j=%d k=%d\n",i,j,k);

    return 0;
}
