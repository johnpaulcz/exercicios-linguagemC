//carregar 5 elementos e apresentar s� os pares maiores que zero

#include <stdio.h> //sdt = Standard (padr�o) | io = Entrada/Sa�da

int main(){
	int vetor[5];
	int pares[5];
	int contador = 0;
	for (int i = 0; i < 5; i++)
	{
		printf ("Digite um valor para o vetor: ");
		scanf ("%d", &vetor[i]);
		if (vetor[i] > 0 && vetor[i] % 2 == 0)
		{
			pares[contador] = vetor[i];
			contador = contador+1;
		}
	}
	for (int i = 0; i < contador; i++)
	{
		printf ("%d\n", pares[i]);
	}
}
