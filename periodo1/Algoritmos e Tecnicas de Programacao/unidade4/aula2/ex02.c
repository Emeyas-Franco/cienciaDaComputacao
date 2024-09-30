#include <stdio.h>

void exemploPassagemPorReferencia(int *y) {
    (*y) = (*y) * 2; // Altera diretamente o valor da variável original
    printf("Dentro da funcao: %d\n", *y);
}

int main() {
    int numero = 5;
    exemploPassagemPorReferencia(&numero);
    printf("Fora da funcao: %d\n", numero); //Agora, o valor é modificado para 10.
    return 0;
}
