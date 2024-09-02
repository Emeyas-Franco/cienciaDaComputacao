#include <stdio.h>

float calcularSalarioBruto(float valorHora, float horasTrabalhadas) {
    return valorHora * horasTrabalhadas;
}

float desconto (float descontoINSS, float salarioBruto) {
    return salarioBruto * descontoINSS;
}

float descVT (float descontoVT, float salarioBruto) {
    return salarioBruto * descontoVT;
}

float salarioLiquido (float salarioBruto, float descontoINSS) {
    return salarioBruto - descontoINSS;
}

int main() {
    float valorHora, horasTrabalhadas;

    printf("Quantas horas que você trabalhou: ");
    scanf("%f", &horasTrabalhadas);
    printf("Informe o valor da hora: ");
    scanf("%f", &valorHora);
    float resultado = calcularSalarioBruto(valorHora, horasTrabalhadas);
    printf("Salario bruto: R$ %.2f\n", resultado);

    float descontoINSS;
    float totalDesconto;

    if (resultado > 2500) {
        descontoINSS = .12;
    } else {
        descontoINSS = .09;
    }
    totalDesconto = desconto(descontoINSS,resultado);
    printf("O total de desconto do INSS e: R$ %.2f\n", totalDesconto);

    float descontoVT = descVT(.06, resultado);
    printf("O total de desconto do Vale Transporte e: R$ %.2f\n", descontoVT);

    float salario = salarioLiquido(resultado, totalDesconto+descontoVT);
    printf("O seu salario liquido e de R$ %.2f\n", salario);

    printf("Fim do Programa");
    return 0;
}
