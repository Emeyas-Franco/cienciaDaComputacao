#include <stdio.h>

int main() {
    int tabuada = 3;
    int resultado = 0;
    printf("Tabuada de qual numero: ");
    scanf("%d", &tabuada);
    for (int cont = 1; cont <= 10; cont++){
        resultado = tabuada * cont;
        printf("%d x %d = %d\n", tabuada, cont, resultado);
    }


    return 0;
}
