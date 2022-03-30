#include <stdio.h>

void funcaoSemRetorno(void){
    printf("Eu não tenho retorno\n");
}

int main(void){
    funcaoSemRetorno();

    return 0;
}