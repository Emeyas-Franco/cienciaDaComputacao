#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int escolha;

    printf("escolha 1 ou 2: ");
    scanf("%d", escolha);

    switch(escolha) {
    case 1:
        printf("Voce escolheu a opcao 1.\n");
        break;
    case 2:
        printf("Voce escolheu a opcao 2.\n");
        break;
    default:
        printf("Voce escolheu uma opcao invalida.\n");
    }


    printf("Fim do Programa.\n");
    return 0;
}
