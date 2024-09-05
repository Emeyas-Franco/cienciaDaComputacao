#include <stdio.h>

void exemploPassagemPorReferencia(float *y, float *z) {
    (*y) = ((*y) * 17) / *z; // Altera diretamente o valor da variável original
    printf("Dentro da Funcao: %.2f %.2f\n", *y, *z);
}

int main() {
    float num1 = 3;
    float num2 = 5;
    exemploPassagemPorReferencia(&num1, &num2);
    printf("Fora da funcao: %.2f %.2f\n", num1, num2);
    return 0;
}
