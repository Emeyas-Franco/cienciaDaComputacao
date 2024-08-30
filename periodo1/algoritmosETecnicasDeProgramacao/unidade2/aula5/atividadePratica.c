#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX_STRING_LENGTH 50
const float JUROS_ANUAL = 0.05;

int main() {
    float valInvestInicial, valInvestFinal;
    int numAnos;
    int vetor[3] = {98, 65, 32};
    int matriz[2][2] = {{78, 89},{45, 56}};
    int *ptr_vetor;

    ptr_vetor = &vetor[0];

    printf("Qual o valor inicial do investimento: ");
    scanf("%f", &valInvestInicial);
    printf("Por quantos anos voce quer investir: ");
    scanf("%d", &numAnos);
    valInvestFinal = valInvestInicial * (1 + (JUROS_ANUAL * numAnos));
    printf("Digite o numero a ser inserido no vetor[0]: ");
    scanf("%p", ptr_vetor);
    printf("Investindo o valor de R$ %.2f.\n Ao final de %d anos.\n Voce tera o valor de %.2f\n", valInvestInicial, numAnos, valInvestFinal);
    printf("O vetor com 3 numeros pre-definidos e %d %d %d.\n", vetor[0], vetor[1], vetor[2]);
    printf("A matriz com 3 numeros pre-definidos e [%d %d], [%d %d].\n", matriz[0][0], matriz[0][1], matriz[1][0], matriz[1][1]);
    printf("Endereco do elemento vetor[0] e: %p.\n", (void*)&vetor[0]);
    printf("Endereco do elemento vetor[1] e: %p.\n", (void*)&vetor[1]);
    printf("Endereco do elemento vetor[2] e: %p.\n", (void*)&vetor[2]);
    printf("Endereco do elemento matriz[0][0] e: %p.\n.", (void*)&matriz[0][0]);
    printf("Endereco do elemento matriz[0][1] e: %p.\n.", (void*)&matriz[0][1]);
    printf("Endereco do elemento matriz[1][0] e: %p.\n.", (void*)&matriz[1][0]);
    printf("Endereco do elemento matriz[1][1] e: %p.\n.", (void*)&matriz[1][1]);

     return 0;
}


