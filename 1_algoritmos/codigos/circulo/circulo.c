#include <stdio.h>

double areaCirculo(double r);

int main(void){
    double area = areaCirculo(2);
    printf("Area: %f\n", area);

    return 0;
}

double areaCirculo(double r){
    const double PI = 3.14159;
    return PI * r * r;
}