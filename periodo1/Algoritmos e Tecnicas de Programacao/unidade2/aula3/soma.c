#include <stdio.h>

int main () {
    int a, b, soma;

    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);

    soma = a + b;

    printf("A soma entre %d e %d é %d.\n", a, b, soma);
    return 0;
}