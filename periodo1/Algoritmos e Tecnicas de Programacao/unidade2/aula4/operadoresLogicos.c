#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int x = 1;
    int y = 3;
    int z = 5;

    //Operador lógico AND (&)
    if (z > y & y > x) {
        printf("z eh maior que x e y.\n");
    } else {
        printf("tratar outras situações.\n");
    }

    //Operador lógico OR (|)
    if (x == y | x == z) {
        printf("x eh igual a y ou z.\n");
    } else {
        printf("x nao eh igual a y ou z.\n");
    }
    
    //Operador lógico NOT (!)
    if (!(x > y)) {
        printf("x nao eh maior que y.\n");
    } else {
        printf("x eh maior que y.\n");
    }
    
    printf("Fim do Programa.\n");
    return 0;
}