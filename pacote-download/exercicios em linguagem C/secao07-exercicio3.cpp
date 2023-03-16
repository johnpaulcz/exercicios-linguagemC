//gerar e mostrar numero impares entre 100 e 200

#include <stdio.h>


int main (){
	int i;
	for (i = 100; i <= 200; i++)
	{
		if (i % 2 != 0)
		{
			printf ("%d\n", i);
		}
	}
}
		
