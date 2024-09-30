#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main () {
    char nome;
    int numBilhete, idade;
    bool passageiroEspecial;
    printf("Informe o nome do passageiro: %c\n", nome);
    scanf("%c", &nome);
    printf("Informe o número do bilhete: %d\n", numBilhete);
    scanf("%d", &numBilhete);
    printf("Informe a idade do passageiro: %d\n", idade);
    scanf("%d", &idade);
    printf("Necessita de assitência especial: %s\n", passageiroEspecial ? "Sim" : "Não");
    
    //O sistema deve realizar verficações, como a idade mínima permitida para o embarque, garantindo que apenas passageiros elegíveis embarquem.


    // O sistema deve fornecer feedback ao pasasgeiro, informando se o embarque é permitido ou se há alguma restrição devido à idade ou necessidade de assistência especial.
    return 0;
}