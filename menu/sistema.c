#include <stdio.h>
#include <stdlib.h>

#include "calcularNota.h"
#include "calcularIdade.h"

int menu(void) {
    int opcao;

    printf("------------ 8< ------------\n");
    printf("1 - cálculo de notas\n");
    printf("2 - cálculo da idade futura\n");
    printf("0 - Sair\n");
    printf("------------ >8 ------------\n");

    printf ("Qual função quer executar? ");
    scanf  ("%d", &opcao);

    return opcao;
}

int main(void) {
    int opcao;

    while(1) {
        opcao = menu();

        if (opcao == 1) {
            calcularNota();
        }

        if (opcao == 2) {
            calcularIdade();
        }

        if (opcao == 0) {
            break;
        }
    }

    return 0;
}

