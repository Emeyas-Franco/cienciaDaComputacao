#include <stdio.h>

// Função recursiva para calcular o custo total de abastecimento
float calcularCustoTotal(float capacidadeTanque[], float precoCombustivel[], int tipoCombustivel[], int n) {
    // Caso base: se não houver mais caminhões, o custo total é 0
    if (n == 0) {
        return 0;
    }

    // Calcula o custo de abastecimento do último caminhão
    float custoAtual = capacidadeTanque[n-1] * precoCombustivel[tipoCombustivel[n-1]];

    // Chama a função recursivamente para os demais caminhões
    return custoAtual + calcularCustoTotal(capacidadeTanque, precoCombustivel, tipoCombustivel, n-1);
}

int main() {
    // Dados de entrada
    float capacidadeTanque[] = {150.0, 200.0, 300.0};  // Capacidades dos tanques dos caminhões
    float precoCombustivel[] = {5.5, 6.2};  // Preços dos combustíveis: 0 = gasolina, 1 = diesel
    int tipoCombustivel[] = {0, 1, 1};  // Tipo de combustível por caminhão: 0 = gasolina, 1 = diesel
    int numCaminhoes = sizeof(capacidadeTanque) / sizeof(capacidadeTanque[0]);  // Número de caminhões

    // Chama a função recursiva e calcula o custo total
    float custoTotal = calcularCustoTotal(capacidadeTanque, precoCombustivel, tipoCombustivel, numCaminhoes);

    // Exibe o resultado
    printf("Custo total de abastecimento: R$ %.2f\n", custoTotal);

    return 0;
}
