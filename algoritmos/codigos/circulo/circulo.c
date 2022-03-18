# include <stdio.h>

double areaCirculo(double r){
    double pi = 3.14159;

    return (pi * r * r); 
}

int main(void){
    printf("Área = %lf\n", areaCirculo(2.0));

    return 0;
}

