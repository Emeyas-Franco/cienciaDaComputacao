#include <stdio.h>

int main () {
    int valor;
    do {
        printf("Digite um valor numerico diferente de 0: ");
        scanf("%d", &valor);

        if (valor != 0) {
            int resultado = verificarPositivoNegativo(valor);
            printf("O resultado da funcao e: %d\n", resultado);
        } else {
            printf("Valor invalido. tente novamente.\n");
        }

    }
    while (valor == 0);
    return 0;
}

int verificarPositivoNegativo(int numero) {
    if (numero > 0) {
        return 1;
    } else {
        return 0;
    }

}
