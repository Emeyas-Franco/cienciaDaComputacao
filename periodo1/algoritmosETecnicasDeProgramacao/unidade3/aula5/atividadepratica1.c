#include <stdio.h>

int main() {
    float nota1[2], nota2[2], media[2];
    int i = 0;
    while (i < 2){
        printf("Digite a 1a nota do Aluno %d: ", i+1);
        scanf("%f", &nota1[i]);
        printf("Digite a 2a nota do Aluno %d: ", i+1);
        scanf("%f", &nota2[i]);
        media[i] = (nota1[i] + nota2[i]) / 2;
        printf("A media do aluno %d e %.2f.\n\n", i+1, media[i]);
        i++;
    }

    for(int cont = 0; cont < 2; cont++) {
        if(nota1[cont] > nota2[cont]){
            printf("A maior nota do aluno %d e %.2f\n", cont + 1, nota1[cont]);
            printf("A menor nota do aluno %d e %.2f\n\n", cont + 1, nota2[cont]);
        } else {
            printf("A maior nota do aluno %d e %.2f\n", cont + 1, nota2[cont]);
            printf("A menor nota do aluno %d e %.2f\n\n", cont + 1, nota1[cont]);
        }
    }
    do {
        printf("Alunos Aprovados: \n");

        i++
    } while (media[i] < 6);


        printf("\n");
    return 0;
}
