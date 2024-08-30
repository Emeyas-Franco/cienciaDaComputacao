#include <stdio.h>

int main () {
    int cartaoValido = 1; // 1 representa verdadeiro
    int senhaCorreta = 0;

    if (cartaoValido && senhaCorreta) {
        printf("Acesso concedido.\n");
    } else {
        printf("Acesso negado.\n");
    }
    return 0;
}