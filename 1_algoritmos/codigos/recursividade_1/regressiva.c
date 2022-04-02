#include <stdio.h>

void contagemRegressiva(int num);

int main(void){
    contagemRegressiva(10);
    return 0;
}

void contagemRegressiva(int num){
    if(num == 0){
        printf("%d\n", num);
    }
    else{
        printf("%d\n", num);
        contagemRegressiva(num - 1);
    }
}