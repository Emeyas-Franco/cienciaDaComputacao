#include <stdio.h>

void exemploPassagemPorValor(int x) {
    x = x * 2; // Altera apenas a cópia local de x
    printf("Dentro da funcao: %d\n", x);
}

int main () {
    int numero = 5;
    exemploPassagemPorValor(numero);
    printf("Fora da função: %d\n", numero); // Permanece 5, pois a função atua na cópia
    return 0;
}
