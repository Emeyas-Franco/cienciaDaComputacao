#include <stdio.h>

void exemploPassagemPorValor(int x) {
    x = x * 2; //Altera apenas cópia local de x
    printf("Dentro da função: %d\n", x);
}

int main() {
    int numero = 5;
    exemploPassagemPorValor(numero);
    printf("Fora da função: %d\n", numero);
    return 0;
}
