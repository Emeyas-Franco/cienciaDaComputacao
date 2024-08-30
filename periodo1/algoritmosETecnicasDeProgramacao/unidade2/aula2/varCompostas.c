#include <stdio.h>

int main () {
    //STRUCTs (Estruturas): agrupa diferentes informações de tipos diferentes.
    struct Aluno {
        char nome [50];
        int idade;
        float mediaNotas;
    };
    //ARRAYs (Vetores): agrupa diferentes informações, mas do mesmo tipo.
    int numeros [5] = {1, 2, 3, 4, 5};

    //UNIONs (Uniões): Permitem o armazenamento de diferentes tipos de dados em uma única estrutura.

    union Dado {
        int inteiro;
        float decimal;
    };

    //PONTEIROS: Variável que em vez de armazenar diretamente dados, armazena a localização na memória onde esses dados estão.
    //Declarando uma variável inteira
    int numero = 42;
    //Declarando um ponteiro para inteiro
    int *ponteiroNumero;
    //Atribuindo o endereço da variável 'numero' ao ponteiro
    ponteiroNumero = &numero;
    //Imprimindo o valor da variável usando o ponteiro
    printf("Valor da variável 'número': %d\n", *ponteiroNumero);

    
    

    return 0;

}