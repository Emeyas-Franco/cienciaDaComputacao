#include <stdio.h>
#include <math.h>

int main () {
    double num = 16;
    double raizQuadrada = sqrt(num);
    double seno = sin(num);
    double coseno = cos(num);
    printf("A raiz quadrade de %.2f é %.2f.\n", num, raizQuadrada);
    printf("O seno de %.2f é %.2f.\n", num, seno);
    printf("O coseno de %.2f é %.2f.\n", num, coseno);

    return 0;
}