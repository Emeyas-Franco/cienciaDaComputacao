#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    double num1;
    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);
    num1 = round(num1);
    printf("O primeiro numero arredondado e %1.2f.\n\n", num1);




    printf("Fim do Programa.\n");
    return 0;
}