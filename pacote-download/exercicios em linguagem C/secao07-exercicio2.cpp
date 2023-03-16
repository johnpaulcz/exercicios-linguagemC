//contar de 1 a 100 e a cada multiplo de 10 emitir mensagem "multiplo de 10"

#include <stdio.h>


int main (){
	int i;
	for (i = 1; i<=100; i++)
		{
			printf ("%d\n",i);
			if (i % 10 == 0)
			{
				printf ("Multiplo de 10\n", i);
			}
		}
}
