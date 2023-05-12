#include <stdio.h>

int enRangoParaIncisoA(int x);
int enRangoParaIncisoB(int x);
int enRangoParaIncisoC(int x);
int enRangoParaIncisoD(int x);
int fueraDeRangoParaIncisoE(int x);

int main(void){

    int n;

    printf("Ingresa tu numero ");
    scanf("%d",&n);

    printf("%d\n",enRangoParaIncisoA(n));
    printf("%d\n",enRangoParaIncisoB(n));
    printf("%d\n",enRangoParaIncisoC(n));
    printf("%d\n",enRangoParaIncisoD(n));
    printf("%d\n",fueraDeRangoParaIncisoE(n));

    return 0;
}

int enRangoParaIncisoA(int x){
    if(x<48){
        return 0;
    }
    else{
        if(x>57){
            return 0;
        }
        else{
            return 1;
        }
    }
}
int enRangoParaIncisoB(int x){
    if(x<65){
        return 0;
    }
    else{
        if(x>90){
            return 0;
        }
        else{
            return 1;
        }
    }
}
int enRangoParaIncisoC(int x){
    if(x<97){
        return 0;
    }
    else{
        if(x>122){
            return 0;
        }
        else{
            return 1;
        }
    }
}
int enRangoParaIncisoD(int x){
    if(enRangoParaIncisoB(x)){
        return 1;
    }
    else{
        if(enRangoParaIncisoC(x)){
            return 1;
        }
        else{
            return 0;
        }
    }
}
int fueraDeRangoParaIncisoE(int x){
    if(enRangoParaIncisoA(x)){
        return 0;
    }
    else{
        if(enRangoParaIncisoD(x)){
            return 0;
        }
        else{
            return 1;
        }
    }
}
