#include <stdio.h>
#include <time.h>

int main() {
    time_t agora = time(NULL);
    struct tm *local = localtime(&agora);
    int hora = local->tm_hour;

    if(hora >= 6 && hora < 12) {
        printf("Bom dia!\n");
    } else if (hora >= 12 && hora < 18) {
        printf("Boa tarde!\n");
    } else if (hora >= 18 && hora < 24) {
        printf("Boa noite!\n");
    } else {
        printf("Boa madrugada!\n");
    }
    return 0;
}
