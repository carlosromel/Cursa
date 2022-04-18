#include <stdio.h>
#include <stdlib.h>

float f, c;

void main(void)

{
	printf ("Digite a temperatura em Fahrenheit: \n");
	scanf  ("%f", &f);
	
	c = (float) 5/9 * (f - 32);
	
	printf ("A temperatura em Graus Celsius e: \n%f", c);
}

//printf ("Digite a Base do Triangulo \n");
