#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritimo para ler a base e a altura de um triângulo.
Em seguida, imprima a área dele.
Sendo: Área = (Base*Altura) / 2*/

int base, altura;
float area;

void main(void)

{

printf ("Digite a Base do Triangulo \n");
scanf  ("%d", &base);
printf ("Digite a Altura do Triangulo \n");
scanf  ("%d", &altura);

printf("A area total do meu triangua e de %d", (base *altura)/2);

}
