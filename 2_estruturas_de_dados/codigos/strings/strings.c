#include <stdio.h> 

int main(void){
    char string[7] = "Lasanha";
    for(int i = 0; i < 7; i++){
        printf("%c", string[i]);
    }
    printf("\n%s\n", string);
}