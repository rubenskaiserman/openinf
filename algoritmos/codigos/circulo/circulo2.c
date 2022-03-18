#include <stdio.h>
#include "circulo.c"

int main(void){
    double r;
    scanf("%lf", &r);
    printf("Área: %lf\n", areaCirculo(r));
    
    return 0;
}