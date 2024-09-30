#include <stdio.h>
#include <string.h>
#include <math.h>

void imprimirNumeros(int num) {
    if(num == 0){
        return;
    } else {
        printf("%d ", num);
        imprimirNumeros(num -1);
    }
}

int main () {
    int n = 150;
    printf("Os primeiros %d numeros naturais em ordem decrescente sao: ", n);
    // Chamnar a função recursiva
    imprimirNumeros(n);

    printf("\nFim do Programa!\n");
    return 0;
}
