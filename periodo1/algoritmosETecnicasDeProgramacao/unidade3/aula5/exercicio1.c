#include <stdio.h>

int main () {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if ((num % 2 == 0) && num != 0) {
        printf("O numero %d e um numero par.\n", num);
    } else if (num == 0) {
        printf("O numero %d e ZERO.\n", num);
    } else {
        printf("O numero %d e um numero impar.\n", num);
    }

    printf("Fim do Programa!");


    return 0;
}
