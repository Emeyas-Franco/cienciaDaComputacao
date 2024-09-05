#include <stdio.h>

int x = 5; // Variável Global

void exemploFuncao() {
    int x = 10; // Variável local que oculta a variável global (10)
    printf("%d\n", x);
}

int main() {
    exemploFuncao();
    printf("%d\n", x); // Imprime o valor global (5)
    return 0;
}
