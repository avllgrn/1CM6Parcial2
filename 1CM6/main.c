#include <stdio.h>

int main(void){
    int i,j;

    i=0;
    j=100;
    while(i<10 && j>0){
        printf("i=%d j=%d\n",i,j);
        i = i+1;
        j = j-10;
    }

    return 0;
}
