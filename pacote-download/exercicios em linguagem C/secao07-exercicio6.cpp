//tabuada dos numero 1 ao 10

#include <stdio.h>


int main (){
	int num, mult;
	printf ("Escolha um numero para saber sua tabuada: ");
	scanf ("%d", &num);
	while (num < 1 || num > 10)
	{
		printf ("Escolha um numero para saber sua tabuada: ");
		scanf ("%d", &num);
	}
	for (int i = 0; i<=10; i++)
	{
		mult = num*i;
		printf ("%d x %d = %d\n", num, i, mult);
	}
	
}
