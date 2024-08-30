#include <stdio.h>
#include <stdbool.h>

int main () {
    bool estaChovendo;
    estaChovendo = false;
    printf ("Está chovendo? %s\n", estaChovendo ? "Sim" : "Não");

    return 0;
}