# include <stdio.h>

int main(void){
    double pi = 3.14159;
    double r;
    scanf("%le", &r);
    double a = pi * r * r;
    printf("A área para o raio inserido é: %f\n", a);

    return 0;
}

