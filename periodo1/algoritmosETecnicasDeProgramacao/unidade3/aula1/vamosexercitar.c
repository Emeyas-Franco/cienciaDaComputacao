#include <stdio.h>

int main () {
    int nivelCombustivel, orientacaoNave, tempestadesSolares;

    printf("Informe o nível de combustível: ");
    scanf("%d", &nivelCombustivel);

    if(nivelCombustivel < 20) {
        printf("Nivel de combustivel baixo. Alerta!\n");
    } else {
        printf("A nave esta fora da rota: (0 para sim ou 1 para nao)");
        scanf("%d", &orientacaoNave);
        if (orientacaoNave = 0) {
            printf("Acione o sistema de correcao de trajetoria.\n");
        } else {
            printf("Ha tempestades solares: (0 para sim ou 1 para nao)");
            scanf("%d", &tempestadesSolares);
            if (tempestadesSolares = 0) {
                printf("Ativando protocolo de protecao contra tempestade solar...\n");
            } else {
                printf("Chegamos a Lua.\n");
            }
        }
    }
    return 0;
}
