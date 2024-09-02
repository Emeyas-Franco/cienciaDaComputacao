#include <stdio.h>

void exibirMensagem() {
printf("Esta é uma função sem retorno.\n");
}

int somar(int a, int b) {
return a + b;
}

int main () {
exibirMensagem();
int resultado = somar (3, 5);
printf("A soma é: %d\n", resultado);
return 0;
}
