#include <stdio.h>

void dobrar_elementos(int *arr, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        arr[i] *= 2;
    }
}

int main(){
    int numeros[] = {1, 2, 3, 4, 5};
    dobrar_elementos(numeros, 5);

    printf("Array dobrado: \n");
    for (int i = 0; i < 5; i++){
        printf("%d\n", numeros[i]);
    }
    return 0;
}
