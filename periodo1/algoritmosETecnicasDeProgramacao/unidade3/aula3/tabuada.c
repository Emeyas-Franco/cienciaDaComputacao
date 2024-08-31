#include <stdio.h>
#include <math.h>

int main(){
    char opcao;
    do {
        int num, result;
        printf("Escolha qual tabuada quer descobrir.\n");
        printf("Digite um numero: ");
        scanf("%d", &num);

        for(int i = 1; i <= 10; i++){
            result = num * i;
            printf("%d x %d = %d\n", num, i, result);
        }

        int resposta;
        printf("Qual e o resultado da multiplicação de %d por 5? ", num);
        scanf("%d", &resposta);
        if (resposta == num * 5) {
            printf("Resposta correta! Avance para o proximo numero.\n");
        } else {
            printf("Resposta incorreta. Tente novamente.\n");
        }

        printf("Deseja praticar outra tabuada? (S/N)\n");
        scanf(" %c", &opcao);
    } while (opcao == 'S' || opcao == 's');
    printf("Programa encerrado. Obrigado por praticar");
    return 0;
}
