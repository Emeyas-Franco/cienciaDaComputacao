#include <stdio.h>

int fatorial (int n) {
    //CASO BASE
    if (n == 0 || n == 1){
        return 1;
    }
    //CASO RECURSIVO
    else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("O calculo fatorial de %d e %d", num, fatorial(num));
    return 0;
}
