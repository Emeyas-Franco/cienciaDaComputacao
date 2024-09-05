#include <stdio.h>

int fibonacci(int num1, int num2){
    return num1 + num2;
}


int main(){
    int num1 = 0, num2 = 1, entrada;
    printf("Digite um numero: ");
    scanf("%d", entrada);

    printf("%d ", num1);
    printf("%d ", num2);
    if (num2 < 10000 ) {
        while (num2 < 10000) {
        int num3 = fibonacci(num1,num2);
        printf("%d", num3);
        num1 = num2;
        num2 = num3;
        }
    } else if(entrada == num1){
        printf("O numero digitado pertence a sequencia Fibonnaci");
    } else {
        printf("O numero digitado nao pertence a sequencia Fibonnaci");
    }


    return 0;
}
