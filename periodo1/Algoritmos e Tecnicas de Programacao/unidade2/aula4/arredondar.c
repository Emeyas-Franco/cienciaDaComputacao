#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    double num1 = 6.6;
    double num2 = 8.7;
    double num3 = 16.1;

    num1 = floor(num1); //arredonda pra baixo
    num2 = round(num2); //arredonda o número.
    num3 = ceil(num3); // arredonda pra cima.
    printf("Os numeros arredondados sao respectivamente %.2f, %.2f e %.2f.\n", num1, num2, num3);

    printf("Fim do Programa.\n");
    return 0;
}