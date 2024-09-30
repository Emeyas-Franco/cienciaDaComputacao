#include <stdio.h>

void exemploPassagemPorValor(int x) {
    x = x * 2; // Altera apenas a c�pia local de x
    printf("Dentro da funcao: %d\n", x);
}

int main () {
    int numero = 5;
    exemploPassagemPorValor(numero);
    printf("Fora da fun��o: %d\n", numero); // Permanece 5, pois a fun��o atua na c�pia
    return 0;
}
