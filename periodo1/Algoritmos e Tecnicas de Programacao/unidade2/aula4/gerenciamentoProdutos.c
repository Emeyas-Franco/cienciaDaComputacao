#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX_PRODUTOS 5
#define MAX_NOME 50

struct Produto
{
    char nomeProduto[MAX_NOME];
    float precoProduto;
    int quantProduto;
};

int main() {
    struct Produto produtos[MAX_PRODUTOS];

    for (int i = 0; i < MAX_PRODUTOS; i++) {
        printf("Digite o nome do produto %d:", i + 1);
        scanf("%s", produtos[i].nomeProduto);
        printf("Digite o preco do produto %d:", i + 1);
        scanf("%f", &produtos[i].precoProduto);
        printf("Digite a quantidade do produto %d:", i + 1);
        scanf("%d", &produtos[i].quantProduto);
    }
    printf("Produtos cadastrados:\n");
    for (int i = 0; i < MAX_PRODUTOS; i++) {
        printf("Produto %d: %s\n", i + 1, produtos[i].nomeProduto);
        printf("Preço %d: %.2f\n", i + 1, produtos[i].precoProduto);
        printf("Quantidade %d: %d\n", i + 1, produtos[i].quantProduto);
        printf("\n");
    }
    return 0;
}