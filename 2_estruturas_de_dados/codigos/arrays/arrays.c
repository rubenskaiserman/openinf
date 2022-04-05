#include <stdio.h>

int main(void){
    int arrayInts[5] = {0, 1, 2, 3, 4};
    double arrayDouble[4] = {9.2, 1.3, 1.111, 3.14159};
    char arrayChar[9] = {'O', 'l', 'a', ' ', 'm', 'u', 'n', 'd', 'o'};

    for(int i = 0; i < 5; i++){
        printf("%d, ", arrayInts[i]);
    }
    printf("\n");
    for(int i = 0; i < 4; i++){
        printf("%f, ", arrayDouble[i]);
    }
    printf("\n");
    for(int i = 0; i < 9; i++){
        printf("%c", arrayChar[i]);
    }
    printf("\n");

    return 0;
}