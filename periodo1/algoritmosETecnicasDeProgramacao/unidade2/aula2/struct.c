#include <stdio.h>
#include <math.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int idade;
    float mediaNotas;
};
int main () {
    struct Aluno aluno1;
    strcpy(aluno1.nome, "Emeyas Franco Simas");
    aluno1.idade = 20;
    aluno1.mediaNotas = 9.3;
    struct Aluno aluno2;
    strcpy(aluno2.nome, "Amanda Julyana Brito Santos");
    

    printf("Nome: %s\n", aluno1.nome);
    printf("Idade: %d\n", aluno1.idade);
    printf("Média: %.2f\n", aluno1.mediaNotas);
    printf("Nome: %s\n", aluno2.nome);




    printf("Fim do Programa!\n");
    return 0;
}