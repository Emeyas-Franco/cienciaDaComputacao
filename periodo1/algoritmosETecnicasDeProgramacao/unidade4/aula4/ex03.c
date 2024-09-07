#include <stdio.h>

int fatorial_tail(int n, int resultado) {
    if (n == 0) {
        return resultado;
    } else {
        return fatorial_tail(n -1, n * resultado);
    }
}

int fatorial(int n) {
    return fatorial_tail(n, 1);
}

int main() {
    int numero = 5;
    printf("O fatorial do numero %d e %d.\n", numero, fatorial(numero));
    return 0;
}
