#include <stdio.h>

int main() {
    int num, fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Numero invalido.\n");
    } else {
        int i = num;
        do {
            fatorial *= i;
            i--;
        } while (i > 0);
        printf("O fatorial de %d e: %d\n", num, fatorial);
    }
    printf("Fim do Programa.\n");
    return 0;
}
