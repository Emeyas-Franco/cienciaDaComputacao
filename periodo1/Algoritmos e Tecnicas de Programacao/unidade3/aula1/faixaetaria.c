#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade < 13) {
        printf("Crianca.\n");
    } else if(idade >= 13 && idade < 18) {
        printf("Adolescente.\n");
    } else if(idade >= 18 && idade < 60) {
        printf("Adulto.\n");
    } else {
        printf("Idoso.\n");
    }
    return 0;
}
