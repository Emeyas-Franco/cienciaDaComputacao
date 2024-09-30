#include <stdio.h>

int* alocaMemoria() {
    int *ponteiro = (int *)malloc(sizeof(int));//Aloca��o din�mica de mem�ria
    *ponteiro = 10;
    return ponteiro;
}

int main() {
    int *ptr = alocaMemoria(); //Recebe o ponteiro retornado pela fun��o
    printf("Valor alocado dinamicamente: %d\n", *ptr);
    free(ptr); // Libera a mem�ria alocada dinamicadmente
    return 0;
}
