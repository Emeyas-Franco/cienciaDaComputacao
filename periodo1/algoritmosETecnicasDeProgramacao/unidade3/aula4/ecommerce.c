#include <stdio.h>

int main(){
    int contador = 0;
    int produtosPorPagina = 10;
    int totalProdutos;
    int produtosExibidos = 0;

    printf("Digite o total de produtos: ");
    scanf("%d", &totalProdutos);

    while(produtosExibidos < totalProdutos){
        printf("Pagina %d:\n", contador +1);
        for (int i = 0; i < produtosPorPagina && produtosExibidos < totalProdutos; i++) {
            printf("Produto %d\n", produtosExibidos + 1);
            produtosExibidos++;
        }
        contador++;
        printf("\n");
    }
    printf("Todos os produtos foram exibidos.\n");


return 0;
}
