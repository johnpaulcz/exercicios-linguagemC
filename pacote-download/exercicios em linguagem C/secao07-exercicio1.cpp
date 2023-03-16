//informar numero e mostrar o maior entre N numero, condição de parada é o valor 0

#include <stdio.h>


int main (){
	int numero, maior=0;
	printf ("Informe um numero: ");
	scanf ("%d", &numero);
	while (numero != 0)
	{
		if (numero > maior)
		{
		maior = numero;
		}
	printf ("Informe um numero: ");
	scanf ("%d", &numero);
	}
	printf ("Maior numero informado: %d\n", maior);
	
	
}
