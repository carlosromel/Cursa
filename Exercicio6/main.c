#include <stdio.h>
#include <stdlib.h>

char nome[100];
char sexo = 'M';
int idade;
float salario;

void main(void)
{
	printf("Digite o seu nome \n");
	scanf ("%s", &nome);
	
	printf("Digite a sua idade \n");
	scanf ("%d", &idade);
	
	printf("Digite seu salario atual \n");
	scanf ("%f", &salario);
	
	printf("O seu nome e             %s \n", nome);
	printf("A sua idade e            %d \n", idade);
	printf("O seu sexo e             %c \n", sexo);
	printf("O seu salario atual e de %3.2f \n", salario);
	//%3.3f
}
