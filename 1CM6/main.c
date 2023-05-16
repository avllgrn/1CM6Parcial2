#include <stdio.h>

void opcionNumero(void);
int esNumero(char x);
void opcionMayuscula(void);
int esMayuscula(char x);
void opcionMinuscula(void);
int esMinuscula(char x);
void opcionLetra(void);
int esLetra(char x);
void opcionCaracterEspecial(void);
int esCaracterEspecial(char x);


int main(void){
    int opcion;
    printf("1. Numero\n");
    printf("2. Mayuscula\n");
    printf("3. Minuscula\n");
    printf("4. Letra\n");
    printf("5. Caracter Especial\n");
    printf("6. Salir\n");
    printf("Cual es tu opcion? ");
    scanf("%d",&opcion);

    switch(opcion){
        case 1:
            opcionNumero();
            break;
        case 2:
            opcionMayuscula();
            break;
        case 3:
            opcionMinuscula();
            break;
        case 4:
            opcionLetra();
            break;
        case 5:
            opcionCaracterEspecial();
            break;
        case 6:
            printf("Adios!");
            break;
        default:
            printf("Opcion invalida!");
            break;
    }

    return 0;
}

void opcionNumero(void){
    char caracter;
    printf("Ingresa tu caracter ");
    scanf(" %c", &caracter);
    if(esNumero(caracter)){
        printf("%c ES un caracter numerico.",caracter);
    }
    else{
        printf("%c NO es un caracter numerico.",caracter);
    }
}
int esNumero(char x){
    if(x<48){
        return 0;
    }
    else if(x<=57){
        return 1;
    }
    else{
        return 0;
    }
}
void opcionMayuscula(void){
    char caracter;
    printf("Ingresa tu caracter ");
    scanf(" %c",&caracter);
    if(esMayuscula(caracter)){
        printf("%c ES una mayuscula.",caracter);
    }
    else{
        printf("%c NO es una mayuscula.",caracter);
    }
}
int esMayuscula(char x){
    if(x<65){
        return 0;
    }
    else if(x<=90){
        return 1;
    }
    else{
        return 0;
    }
}
void opcionMinuscula(void){
    char caracter;
    printf("Ingresa tu caracter ");
    scanf(" %c",&caracter);
    if(esMinuscula(caracter)){
        printf("%c ES una minuscula.",caracter);
    }
    else{
        printf("%c NO es una minuscula.",caracter);
    }
}
int esMinuscula(char x){
    if(x<97){
        return 0;
    }
    else if(x<=122){
        return 1;
    }
    else{
        return 0;
    }
}
void opcionLetra(void){
    char caracter;
    printf("Ingresa tu caracter ");
    scanf(" %c",&caracter);
    if(esLetra(caracter)){
        printf("%c ES una letra.",caracter);
    }
    else{
        printf("%c NO es una letra.",caracter);
    }
}
int esLetra(char x){
    if(esMayuscula(x)){
        return 1;
    }
    else if(esMinuscula(x)){
        return 1;
    }
    else{
        return 0;
    }
}
void opcionCaracterEspecial(void){
    char caracter;
    printf("Ingresa tu caracter ");
    scanf(" %c",&caracter);
    if(esCaracterEspecial(caracter)){
        printf("%c ES un caracter especial.",caracter);
    }
    else{
        printf("%c NO es un caracter especial.",caracter);
    }
}
int esCaracterEspecial(char x){
    if(esNumero(x)){
        return 0;
    }
    else if(esLetra(x)){
        return 0;
    }
    else{
        return 1;
    }
}
