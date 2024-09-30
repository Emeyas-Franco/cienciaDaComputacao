#include <stdio.h>

int calcfatorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    } else {
        return n * calcfatorial(n - 1);
    }
}

int main () {
    int numero;

    printf("Digite um numero para calcular seu fatorial: ");
    scanf("%d", &numero);

    printf("Conforme solicitado o fatorial de %d e %d\n", numero, calcfatorial(numero));

    printf("Fim do programa!\n");

    return 0;
}
