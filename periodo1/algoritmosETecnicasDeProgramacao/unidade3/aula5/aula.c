#include <stdio.h>

int main() {
    int matA[3][3];
    char resp = 'S';

    while (resp == 'S' | resp == 's') {
        printf("** Entre com os dados da Matriz **\n");
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                scanf("%d", &matA[i][j]);
            }
            printf("\n");
        }
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                printf("%d ", matA[i][j]);
            }
            printf("\n");
        }
        printf("Deseja executar novamente? <S = SIM> <N = NAO>..: ");
        scanf(" %c", &resp);
    }
    printf("Fim do Programa.\n");
    return 0;
}
