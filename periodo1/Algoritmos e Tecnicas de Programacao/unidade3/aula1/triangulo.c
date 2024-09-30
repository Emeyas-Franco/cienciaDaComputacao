#include <stdio.h>

int main () {
    int lado1, lado2, lado3;

    printf("Digite o comprimento do lado 1: ");
    scanf("%d", &lado1);
    printf("Digite o comprimento do lado 2: ");
    scanf("%d", &lado2);
    printf("Digite o comprimento do lado 3: ");
    scanf("%d", &lado3);

    if (lado1 == lado2 && lado2 == lado3) {
        printf("Triangula equilatero.\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("Triangulo isosceles.\n");
    } else {
    printf("Triangulo escalerno.\n");
    }
    return 0;
}
