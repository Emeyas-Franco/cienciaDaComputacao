#include <stdio.h>

int exemploFuncao() {
    int x = 10; //Vari�vel local
    printf("%d\n", x);
}

int main () {
    exemploFuncao();
    //printf("%d\n", x); // Erro! x n�o � vis�vel aqui
    return 0;
}
