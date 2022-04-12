#include <stdio.h>
#include <stdlib.h>

float n1, n2;

float calcularNota(void) {
    float total;
    printf ("Digite a primeira nota: ");
    scanf  ("%f", &n1);
    printf ("Digite a segunda nota.: ");
    scanf  ("%f", &n2);

    total = n1 + n2;

    printf ("A soma das notas é....: %3.2f\n", total);


    return total;
}

