#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 100
#define MAX_NOME 50

// Definição da estrutura Produto
struct Produto {
    int codigoProduto;
    char nomeProduto[MAX_NOME];
    float precoProduto;
    int quantProduto;
};

int numProdutos = 0; // Contador para o número de produtos cadastrados
struct Produto produtos[MAX_PRODUTOS];

// Função para cadastrar um novo produto
void cadastrarProduto() {
    if (numProdutos < MAX_PRODUTOS) {
        struct Produto novoProduto;
        novoProduto.codigoProduto = numProdutos + 1; // Código do produto automático

        printf("Digite o nome do produto: ");
        getchar(); // Limpar o buffer do teclado
        fgets(novoProduto.nomeProduto, MAX_NOME, stdin);
        novoProduto.nomeProduto[strcspn(novoProduto.nomeProduto, "\n")] = '\0'; // Remover o '\n'

        printf("Digite o preco do produto: ");
        scanf("%f", &novoProduto.precoProduto);

        printf("Digite a quantidade em estoque: ");
        scanf("%d", &novoProduto.quantProduto);

        produtos[numProdutos] = novoProduto;
        numProdutos++;

        printf("Produto cadastrado com sucesso!\n\n");
    } else {
        printf("Erro: Capacidade máxima de produtos atingida!\n\n");
    }
}

// Função para consultar um produto pelo nome ou código
void consultarProduto() {
    char nomeBusca[MAX_NOME];
    int codigoBusca, encontrado = 0;

    printf("Digite o nome ou codigo do produto para consulta: ");
    getchar(); // Limpar o buffer do teclado
    fgets(nomeBusca, MAX_NOME, stdin);
    nomeBusca[strcspn(nomeBusca, "\n")] = '\0'; // Remover o '\n'

    for (int i = 0; i < numProdutos; i++) {
        if (strcmp(produtos[i].nomeProduto, nomeBusca) == 0 || produtos[i].codigoProduto == atoi(nomeBusca)) {
            printf("Codigo: %d\n", produtos[i].codigoProduto);
            printf("Nome: %s\n", produtos[i].nomeProduto);
            printf("Preco: %.2f\n", produtos[i].precoProduto);
            printf("Quantidade em estoque: %d\n\n", produtos[i].quantProduto);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Produto nao encontrado!\n\n");
    }
}

// Função para atualizar o estoque de um produto
void atualizarEstoque() {
    char nomeBusca[MAX_NOME];
    int codigoBusca, encontrado = 0, novaQuantidade, tipoAtualizacao;

    printf("Digite o nome ou codigo do produto para atualizar o estoque: ");
    getchar(); // Limpar o buffer do teclado
    fgets(nomeBusca, MAX_NOME, stdin);
    nomeBusca[strcspn(nomeBusca, "\n")] = '\0'; // Remover o '\n'

    for (int i = 0; i < numProdutos; i++) {
        if (strcmp(produtos[i].nomeProduto, nomeBusca) == 0 || produtos[i].codigoProduto == atoi(nomeBusca)) {
            printf("Produto encontrado!\n");
            printf("Digite o tipo de atualização (1 para entrada, 2 para saida): ");
            scanf("%d", &tipoAtualizacao);

            printf("Digite a quantidade: ");
            scanf("%d", &novaQuantidade);

            if (tipoAtualizacao == 1) {
                produtos[i].quantProduto += novaQuantidade;
            } else if (tipoAtualizacao == 2) {
                if (novaQuantidade <= produtos[i].quantProduto) {
                    produtos[i].quantProduto -= novaQuantidade;
                } else {
                    printf("Erro: Quantidade em estoque insuficiente!\n\n");
                    return;
                }
            } else {
                printf("Erro: Tipo de atualização inválido!\n\n");
                return;
            }

            printf("Estoque atualizado com sucesso!\n\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Produto nao encontrado!\n\n");
    }
}

// Função para listar todos os produtos
void listarProdutos() {
    if (numProdutos > 0) {
        printf("Lista de produtos cadastrados:\n");
        for (int i = 0; i < numProdutos; i++) {
            printf("Codigo: %d\n", produtos[i].codigoProduto);
            printf("Nome: %s\n", produtos[i].nomeProduto);
            printf("Preco: %.2f\n", produtos[i].precoProduto);
            printf("Quantidade em estoque: %d\n\n", produtos[i].quantProduto);
        }
    } else {
        printf("Nenhum produto cadastrado!\n\n");
    }
}

// Função principal
int main() {
    int opcao;

    do {
        printf("Menu:\n");
        printf("1. Cadastrar produto\n");
        printf("2. Consultar produto\n");
        printf("3. Atualizar estoque\n");
        printf("4. Listar produtos\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarProduto();
                break;
            case 2:
                consultarProduto();
                break;
            case 3:
                atualizarEstoque();
                break;
            case 4:
                listarProdutos();
                break;
            case 5:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n\n");
                break;
        }
    } while (opcao != 5);

    return 0;
}
