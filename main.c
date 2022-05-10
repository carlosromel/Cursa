#include <stdio.h>
#include <stdlib.h>

char nome [15];
float nota1, nota2, nota3, nota4, media;

void main(void)

{
	printf("Digite o nome do alundo: ");
	scanf("%s", &nome);
	printf("Digite a prmeiro nota: ");
	scanf("%f", &nota1);
	printf("Digite a prmeiro nota: ");
	scanf("%f", &nota2);
	printf("Digite a prmeiro nota: ");
	scanf("%f", &nota3);
	printf("Digite a prmeiro nota: ");
	scanf("%f", &nota4);
	
	media = (nota1 + nota2 + nota3 + nota4) /4);
	
	printf("O nome do aluno e: %s \n", nome);
	printf("A media e %f",);
}
