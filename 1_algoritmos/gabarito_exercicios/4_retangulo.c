#include <stdio.h>

int main(void){
    double a, b;
    printf("Insira a largura do retangulo: ");
    scanf("%lf", &a);
    printf("Insira a altura do retangulo: ");
    scanf("%lf", &b);

    printf("A área do retângulo é: %f\n", a * b);

    return 0;
}