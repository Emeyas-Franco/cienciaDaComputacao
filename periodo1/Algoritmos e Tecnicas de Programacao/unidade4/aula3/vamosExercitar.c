#include <stdio.h>

// Fun��o recursiva para calcular o custo total de abastecimento
float calcularCustoTotal(float capacidadeTanque[], float precoCombustivel[], int tipoCombustivel[], int n) {
    // Caso base: se n�o houver mais caminh�es, o custo total � 0
    if (n == 0) {
        return 0;
    }

    // Calcula o custo de abastecimento do �ltimo caminh�o
    float custoAtual = capacidadeTanque[n-1] * precoCombustivel[tipoCombustivel[n-1]];

    // Chama a fun��o recursivamente para os demais caminh�es
    return custoAtual + calcularCustoTotal(capacidadeTanque, precoCombustivel, tipoCombustivel, n-1);
}

int main() {
    // Dados de entrada
    float capacidadeTanque[] = {150.0, 200.0, 300.0};  // Capacidades dos tanques dos caminh�es
    float precoCombustivel[] = {5.5, 6.2};  // Pre�os dos combust�veis: 0 = gasolina, 1 = diesel
    int tipoCombustivel[] = {0, 1, 1};  // Tipo de combust�vel por caminh�o: 0 = gasolina, 1 = diesel
    int numCaminhoes = sizeof(capacidadeTanque) / sizeof(capacidadeTanque[0]);  // N�mero de caminh�es

    // Chama a fun��o recursiva e calcula o custo total
    float custoTotal = calcularCustoTotal(capacidadeTanque, precoCombustivel, tipoCombustivel, numCaminhoes);

    // Exibe o resultado
    printf("Custo total de abastecimento: R$ %.2f\n", custoTotal);

    return 0;
}
