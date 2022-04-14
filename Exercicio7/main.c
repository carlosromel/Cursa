#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int number;

void main(void)
{
printf("Digite um numero \n");
scanf ("%d", &number);
printf("O numero digitado foi %d \n", number * 2);

printf("Digite um numero \n");
scanf ("%d", &number);
printf("O numero digitado foi %d \n", number / 2);
}
