#include <stdio.h>

int soma(int a, int b){
    return a + b;
}


int main(void){
    int s = soma(2, 3);
    printf("Soma de 2, e 3: %d\n", s);

    return 0;
}