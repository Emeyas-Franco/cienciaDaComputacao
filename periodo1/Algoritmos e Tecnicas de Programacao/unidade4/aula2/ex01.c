#include <stdio.h>

void exemploPassagemPorValor(int x) {
    x = x * 2; //Altera apenas c�pia local de x
    printf("Dentro da fun��o: %d\n", x);
}

int main() {
    int numero = 5;
    exemploPassagemPorValor(numero);
    printf("Fora da fun��o: %d\n", numero);
    return 0;
}
