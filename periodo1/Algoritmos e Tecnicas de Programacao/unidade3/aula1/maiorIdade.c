#include <stdio.h>
int main () {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Voc� � maior de idade.\n");
    }
    return 0;
}
