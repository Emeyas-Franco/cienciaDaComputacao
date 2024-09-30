#include <stdio.h>

int fatorialTail(int n, int resultado) {
    //CASO BASE
    if(n == 0 || n == 1) {
         return resultado;
    } else { //CASO RECURSIVO
        return fatorialTail(n - 1, n * resultado);
    }
}

int fatorial(int n) {
    return fatorialTail(n, 1);
}

int main() {
    int numero = 5;
    printf("O fatorial de %d e: %d\n", numero, fatorial(numero));
    return 0;
}
