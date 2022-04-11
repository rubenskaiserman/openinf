#include <stdio.h>
#include <string.h>

int main(void){
    char str[] = "aMOr da MiNha ViDA";
    for(int i = 0; i < strlen(str); i++){
        if(str[i] >= 65 && str[i] <= 90){
            str[i] += 32;
        }
    }
    printf("%s\n", str);
}