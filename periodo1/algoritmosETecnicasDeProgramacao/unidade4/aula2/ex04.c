#include <stdio.h>

int exemploFuncao() {
    int x = 10; //Variável local
    printf("%d\n", x);
}

int main () {
    exemploFuncao();
    //printf("%d\n", x); // Erro! x não é visível aqui
    return 0;
}
