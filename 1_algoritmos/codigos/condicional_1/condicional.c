#include <stdio.h>

int main(void){
    if(1) // if(valor booleano)
    { // Código se o valor não for 0
        printf("É verdadeiro\n");
    }
    else 
    { //Código se o valor for 0
        printf("É falso\n");
    }
    printf("Esse é rodado de qualquer forma\n"); // Código que é rodado independente do bloco

    return 0;
}