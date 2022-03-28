#include <stdio.h>

int main(void){
    short num1 = -32768;
    int num2 = 2147483647;
    long num3 = 9223372036854775807;

    printf("%d, %d, %ld\n", num1, num2, num3);

    return 0;
}