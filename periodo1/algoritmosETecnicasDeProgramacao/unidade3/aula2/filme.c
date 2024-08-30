#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int opcao;

    printf("Escolha um filme: \n");
    printf("1 - Acao\n");
    printf("2 - Comedia\n");
    printf("3 - Drama\n");
    printf("4 - Animacao\n");
    printf("5 - Suspense\n");

    printf("Digite o numero do filme desejado: \n");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        printf("Voce escolheu o filme de acao.\n");
        break;
    case 2:
        printf("Voce escolheu o filme de comedia.\n");
        break;
    case 3:
        printf("Voce escolheu o filme de drama.\n");
        break;
    case 4:
        printf("Voce escolheu o filme de animacao.\n");
        break;
    case 5:
        printf("Voce escolheu o filme de suspense.\n");
        break;
    default:
        printf("Opcao invalida. Por favor, escolha um numero de 1 a 5.\n");
    }
    printf("Fim do Programa.\n");
    return 0;
}
