#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	float nota1, nota2, media;
	printf("Digite uma nota: ");
	scanf("%f", &nota1);
	printf("Digite outra nota: ");
	scanf("%f", &nota2);
	media = (nota1 + nota2) / 2;
	if (media >= 7.0) {
		printf("A media do aluno e %.2f.\nParabens aluno aprovado.", media);
	} else {
		printf("A media do aluno e %.2f. Aluno reprovado.", media);
	}
    return 0;
}
