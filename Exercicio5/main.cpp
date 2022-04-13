#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float N1, N2, Media, getch;

int main(void)
{
            printf("Digite a 1 nota: ");
			 scanf("%f", &N1);
			printf("Digite a 2 nota: ");
			 scanf("%f", &N2);
			 Media = (N1 + N2) / 2;
			printf("A media e de %3.3f", Media);
//			getch();%3.3f
}

