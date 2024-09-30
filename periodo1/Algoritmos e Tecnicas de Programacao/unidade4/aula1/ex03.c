#include <stdio.h>
#include <math.h>
#include <string.h>

void exemplo(){
    printf("Teste de Procedimento!!!\n");
}
int soma(int a, int b) {

    return a + b;
}

int main () {
    exemplo();

    int resultado = soma(8, 25);

    printf("A soma e: %d\n", resultado);
    printf("Fim do Programa!");
    return 0;
}
