#include <stdio.h>

int str_len(char str[]);


int main(void){
    printf("%d\n", str_len("Eu nao valho nada - Lagum"));
}

int str_len(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}