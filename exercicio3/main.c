#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
tipo de variavel	identificador
float					%f
int						%d
char					%c
char [ ]				%s
*/

float grade  = 10;
int age      = 51;
char sex[5]  = "Male";
char name[7] = "Ricardo";

void main(void)

{
	printf ("My grade  is %3.3f \n", grade);
	printf ("My age    is %d    \n", age);
	printf ("My gender is %s    \n", sex);
	printf ("My name   is %s    \n", name);
}
