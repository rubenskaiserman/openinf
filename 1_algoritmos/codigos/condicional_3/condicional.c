#include <stdio.h>

int main(void){
    if (3 > 5){
        printf("3 é maior que 5... Estranho\n");
    }
    else if(3 == 2 + 1){
        printf("Bom, 3 é sim igual a 3\n");
    }
    else 
    {
        printf("Agora você já está brincando...\n");
    }

    return 0;
}