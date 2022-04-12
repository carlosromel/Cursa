#include <stdio.h>
#include <stdlib.h>

float idade;
int   ano    = 2022,
      futuro = 50;

int calcularIdade(void) {
    int novaIdade;
    printf("Olá Mundo.\n");
    printf("Qual a sua idade? ");
    scanf ("%f", &idade);

    novaIdade = idade + futuro;

    printf("A minha idade, daqui a %d anos (%d) será %d.\n", futuro,
                                                             ano + futuro,
                                                             novaIdade);

    return novaIdade;
}

