#include <stdio.h>

void moveTorre(int n, char origem, char destino, char intermediaro) {
    // CASO BASE
    if (n == 1) {
        printf("Mova disco de %c para %c\n", origem, destino);
        return;
    } else { //CASO RECURSIVO
        moveTorre(n-1, origem, intermediaro, destino);
        printf("Mova disco de %c para %c\n", origem, destino);
        moveTorre(n-1, intermediaro, destino, origem);
    }
}

int main() {
    moveTorre(3, 'A', 'C', 'B');
    return 0;
}
