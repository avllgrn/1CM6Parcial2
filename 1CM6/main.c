#include <stdio.h>

int esNumerico(char x);
int esMayuscula(char x);
int esMinuscula(char x);
int esLetra(char x);
int esCacraterEspecial(char x);

int main(void){

    char c;

    printf("Ingresa tu numero ");
    scanf("%c",&c);

    printf("%d\n",esNumerico(c));
    printf("%d\n",esMayuscula(c));
    printf("%d\n",esMinuscula(c));
    printf("%d\n",esLetra(c));
    printf("%d\n",esCacraterEspecial(c));

    return 0;
}

int esNumerico(char x){
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
int esMayuscula(char x){
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
int esMinuscula(char x){
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
int esLetra(char x){
    if(esMayuscula(x)){
        return 1;
    }
    else{
        if(esMinuscula(x)){
            return 1;
        }
        else{
            return 0;
        }
    }
}
int esCacraterEspecial(char x){
    if(esNumerico(x)){
        return 0;
    }
    else{
        if(esLetra(x)){
            return 0;
        }
        else{
            return 1;
        }
    }
}
