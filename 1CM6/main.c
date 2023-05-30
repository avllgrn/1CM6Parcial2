#include <stdio.h>

int main(void){
    int i;

    i=0;
    while(i<256){
        printf("%d -> %c\n",i,i);
        i = i+1;
    }

    return 0;
}
