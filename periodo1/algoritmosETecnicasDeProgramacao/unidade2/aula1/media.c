#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf("A media do aluno %.2f\n", media);



    printf ("Fim do programa!\n");

    return 0;
}