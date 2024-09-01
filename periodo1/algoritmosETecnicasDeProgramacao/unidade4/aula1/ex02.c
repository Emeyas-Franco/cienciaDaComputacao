#include <stdio.h>

int* alocaMemoria() {
    int *ponteiro = (int *)malloc(sizeof(int));//Alocação dinâmica de memória
    *ponteiro = 10;
    return ponteiro;
}

int main() {
    int *ptr = alocaMemoria(); //Recebe o ponteiro retornado pela função
    printf("Valor alocado dinamicamente: %d\n", *ptr);
    free(ptr); // Libera a memória alocada dinamicadmente
    return 0;
}
