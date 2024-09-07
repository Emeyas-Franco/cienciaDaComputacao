#include <stdio.h>
#include <string.h>
#include <math.h>

int fibonacci(int num) {

    if(num <= 1){
        return num;
    } else {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int main(){
    int termo;

    printf("Digite o termo de Fibonacci desejado:");
    scanf("%d", &termo);

    printf("O %dº termo de Fibonacci e %d\n", termo, fibonacci(termo));

    return 0;
}
