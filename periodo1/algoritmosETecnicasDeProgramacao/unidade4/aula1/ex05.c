#include <stdio.h>

void exibirMensagem() {
printf("Esta � uma fun��o sem retorno.\n");
}

int somar(int a, int b) {
return a + b;
}

int main () {
exibirMensagem();
int resultado = somar (3, 5);
printf("A soma �: %d\n", resultado);
return 0;
}
