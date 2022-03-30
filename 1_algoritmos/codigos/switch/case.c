#include <stdio.h>

int main(void){
    int variavel;

    variavel = 3;
    switch (variavel)
    {
    case 1 :
        printf("O valor é: 1\n");
        break;
    case 2 :
        printf("O valor é: 2\n");
        break;
    case 3 :
        printf("O valor é: 3\n");
        break;
    case 4 :
        printf("O valor é: 4\n");
        break;
    default:
        printf("O valor não é nem 1, nem 2, nem 3 e nem 4\n");
        break;
    }
}