#include <stdio.h>

int main() {
    float nota1, nota2, soma, media;
    float maior = 0, menor = 10;
    int passaram = 0, nao_passaram = 0;
    int i;

    for (i = 1; i <= 20; i++) {
        printf("Digite a primeira nota do aluno %d: ", i);
        scanf("%f", &nota1);

        if (nota1 < 0 || nota1 > 10) {
            printf("Nota inválida! Digite uma nota entre 0 e 10.\n");
            i--;
            continue;
        }

        printf("Digite a segunda nota do aluno %d: ", i);
        scanf("%f", &nota2);

        if (nota2 < 0 || nota2 > 10) {
            printf("Nota inválida! Digite uma nota entre 0 e 10.\n");
            i--;
            continue;
        }

        media = (nota1 + nota2) / 2;

        soma += media;

        if (media > maior) {
            maior = media;
        }

        if (media < menor) {
            menor = media;
        }

        if (media >= 6) {
            passaram++;
        } else {
            nao_passaram++;
        }
    }

    float media_geral = soma / 20;

    printf("Resultados:\n");
    printf("Média geral das notas: %.2f\n", media_geral);
    printf("Maior média: %.2f\n", maior);
    printf("Menor média: %.2f\n", menor);
    printf("Alunos que passaram: %d\n", passaram);
    printf("Alunos que não passaram: %d\n", nao_passaram);

    return 0;
}

