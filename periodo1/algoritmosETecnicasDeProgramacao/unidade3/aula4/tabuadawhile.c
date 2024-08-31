#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int tabuada = 5;
    int resultado = 0;
    int cont = 1;

    while(cont <= 10){
        resultado = tabuada * cont;
        printf("%d x %d = %d\n", tabuada, cont, resultado);
        cont++;
    }


return 0;
}
