#include <stdio.h>

int fibonacci(int num){
    if (num <= 1){
        return num;
    } else {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int fibonacciAuxiliar(int num, int a, int b){
    if (num == 0){
        return a;
    } else if ( num == 1) {
        return b;
    } else {
        return fibonacciAuxiliar(num - 1, b, a + b);
    }
}

int fibonacciTail(int num){
    fibonacciAuxiliar(num, 0, 1);
}

int main() {
    int termo;

    printf("Digite o termo de Fibonacci que quer saber: ");
    scanf("%d", &termo);

    printf("O %do termo da sequencia Fibonacci adquirido atraves da Funcao Recursiva Simples e: %d\n", termo, fibonacci(termo));
    printf("O %do termo da sequencia Fibonacci adquirido atraves da Funcao Recursiva em Calda e: %d\n", termo, fibonacciTail(termo));

    //Não foi explicado como calcular tempo de execução de uma função para comparar as funções utilizadas.

    printf("Fim do Programa!\n");
}
