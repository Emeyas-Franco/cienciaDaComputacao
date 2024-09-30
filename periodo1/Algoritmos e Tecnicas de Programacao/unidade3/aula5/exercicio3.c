#include <stdio.h>

int main() {
    int num, soma;
    printf("Digite um numero inteiro (0 para SAIR): ");
    scanf("%d", &num);
    while (num != 0){
        soma += num;
        printf("Digite um numero inteiro (0 para SAIR): ");
        scanf("%d", &num);
    }
    printf("A soma dos numero e: %d", soma);
    return 0;
}
