#include <stdio.h>

int x = 5; // Vari�vel Global

void exemploFuncao() {
    int x = 10; // Vari�vel local que oculta a vari�vel global (10)
    printf("%d\n", x);
}

int main() {
    exemploFuncao();
    printf("%d\n", x); // Imprime o valor global (5)
    return 0;
}
