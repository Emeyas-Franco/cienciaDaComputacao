#include <stdio.h>

void exemploFuncao() {
    int contador = 0; // Variável estática
    contador++;
    printf("Contador: %d\n", contador);
}

int main () {
    exemploFuncao(); // Contador: 1
    exemploFuncao(); // Contador: 2
    exemploFuncao(); // Contador: 3
    return 0;
}
