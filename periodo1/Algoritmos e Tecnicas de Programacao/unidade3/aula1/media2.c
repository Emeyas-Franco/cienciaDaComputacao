#include <stdio.h>

int main() {
    float media;

    printf("Digite a media do aluno: ");
    scanf("%f", media);

    if (media >= 6.0) {
        printf("O aluno foi aprovado e passara de ano!\n");
    } else {
        printf("O aluno foi reprovado e precisara fazer recuperacao.\n");
    }
    return 0;
}
