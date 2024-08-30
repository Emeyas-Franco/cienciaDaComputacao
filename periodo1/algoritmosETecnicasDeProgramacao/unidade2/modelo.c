#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int matA [4] [4];
    for(int i = 0; 1 < 4; i++) {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &matA[i] [j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d", matA[i][4]);
        }
        printf("\n");
    }
    
    printf("Fim do Programa.\n");
    return 0;
}