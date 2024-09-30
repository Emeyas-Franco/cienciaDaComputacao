#include <stdio.h>
#include <string.h>

int main() {
    char str1[15] = "Hello, ";
    char str2[20] = "world!";

    strcat(str1, str2);

    printf("%s\n", str1);


    return 0;
}