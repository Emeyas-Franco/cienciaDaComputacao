#include <stdio.h>
#include <string.h>

float calcularReajuste(float salarioAtual, float percentualReajuste) {
    float reajuste = (salarioAtual * percentualReajuste) / 100;
    return salarioAtual + reajuste;
}

int main() {
    float salAual, percentReajuste, salarioNovo;
    char colaborador[50];
    printf("Seja bem vindo ao sistema da ABC001\n");
    printf("Digite o nome do colaborador: ");
    fgets(colaborador, sizeof(colaborador), stdin);
    printf("Digite o salario atual de %s " , colaborador);
    scanf("%f", &salAual);
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentReajuste);
    salarioNovo = calcularReajuste(salAual, percentReajuste);
    printf("O colaborador %sTinha um salario de %.2f, e recebeu um reajuste de %.2f%.\nAgora seu novo salario e de R$ %.2f", colaborador, salAual, percentReajuste, salarioNovo);
    return 0;
}
