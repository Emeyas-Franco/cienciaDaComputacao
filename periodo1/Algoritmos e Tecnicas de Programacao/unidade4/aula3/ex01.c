#include <stdio.h>

int fatorial(int n) {
    //caso base
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main(){
    int numero = 6;
    printf("O fatorial de %d e: %d\n", numero, fatorial(numero));
    return 0;
}
