#include <stdio.h>

int main(void){
    double num1, num2, num3, num4;
    
    printf("Insira o valor 1: ");
    scanf("%lf", &num1);
    printf("Insira o valor 2: ");
    scanf("%lf", &num2);
    printf("Insira o valor 3: ");
    scanf("%lf", &num3);
    printf("Insira o valor 4: ");
    scanf("%lf", &num4);
    double media = (num1 + num2 + num3 + num4)/4;
    // Os parenteses são importantes, sem eles o resultado seria (num1 + num 2 + num3) + (num4/4) Que é o resultado errado
    // Isso se dá porque nas regras matemáticas divisão precede soma na hierarquia de operações
    printf("A média é: %f\n", media);

    return 0;
}

