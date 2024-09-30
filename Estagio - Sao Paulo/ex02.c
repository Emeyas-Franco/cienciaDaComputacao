#include <stdio.h>

int pertenceFibonacci(int num) {
    int num1 = 0, num2 = 1, sequencia;
    if (num == 0 || num == 1) {
        return 1;
    }

    while (num2 <= num) {
        if (num2 == num) {
            return 1;
        }
        sequencia = num1;
        num1 = num2;
        num2 = sequencia + num2;
    }

    return 0;
}

int main() {
    int numeroFibonacci;

    printf("Digite um numero para verificar se ele pertence a sequencia de Fibonacci: ");
    scanf("%d", &numeroFibonacci);

    if (pertenceFibonacci(numeroFibonacci)) {
        printf("O numero %d pertence a sequencia de Fibonacci.\n", numeroFibonacci);
    } else {
        printf("O numero %d nao pertence a sequencia de Fibonacci.\n", numeroFibonacci);
    }

    return 0;
}
