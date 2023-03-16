//ler 10 valores inteiros e positivos, encontrar MAIOR, encontrar MENOR, calcular média deles

#include <stdio.h>


int main (){
	int i, valor, menor= 999, maior = -999, soma = 0;
	float media;
	for (i = 1; i <=10; i++)
	{
		printf ("Informe o %d valor: ", i++);
		scanf ("%d", &valor);
		if (valor > 0 )
		{
			if (valor > maior)
			{
				maior = valor;
			}
			else if (valor < menor)
			{
				menor = valor;
			}
			soma = soma + valor;
		}
		i--;
	}
	media = soma / 10;
	printf ("O maior numero: %d\n", maior);
	printf ("O menor numero: %d\n", menor);
	printf ("A media dos numeros: %.2f", media);
	}

	
