#include <stdio.h>

int main(void){
    int i,j;

    for(i=0,j=100; i<10 && j>0; i = i+1,j = j-10)
        printf("i=%d j=%d\n",i,j);

    return 0;
}
