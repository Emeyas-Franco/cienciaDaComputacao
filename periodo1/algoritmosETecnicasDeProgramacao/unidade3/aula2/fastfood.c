#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    const char user[] = "Atendente";
    const int senha = 123456;
    char userd[50];
    int senhad;

    printf("Usuario: ");
    scanf("%s", userd);
    printf("Senha: ");
    scanf("%d", &senhad);
    if (strcmp(user, userd) == 0 && senha == senhad) {
            int opcao;
            printf("Seja bem vindo, Atendente.\n");
            printf("Lanche (Opcao 1).\n");
            printf("Combo (Opcao 2).\n");
            printf("Bebida (Opcao 3).\n");
            printf("Condimentos extra (Opcao 4).\n");
            printf("Escolha a opcao: (1 a 4) ");
            scanf("%d", &opcao);
            switch(opcao){
            case 1:
                printf("Voce escolheu lanche. Por favor, informe os detalhes do pedido.\n");
                break;
            case 2:
                printf("Voce escolheu combo. Por favor, informe os detalhes do pedido.\n");
                break;
            case 3:
                printf("Voce escolheu bebida. Por favor, informe os detalhes do pedido.\n");
                break;
            case 4:
                printf("Voce escolheu condimentos extra. Por favor, informe os detalhes do pedido.\n");
                break;
            default:
                printf("Por favor, escolhe entre 1 e 4: \n");
                return;
            }
    } else {
        printf("\nAcesso nao autorizado. Verifique usuario e senha.\n");
    }
    printf("Fim do Programa.\n");
    return 0;
}
