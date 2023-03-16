//vetor com 20 elementos e fazer a soma deles

#include <stdio.h> //sdt = Standard (padrão) | io = Entrada/Saída

int main(){
	int vetor[20];
	int soma = 0;
	for (int i = 0; i < 20; i++)
	{
		printf ("Digite um valor para o vetor %d/20: ", i+1);
		scanf ("%d", &vetor[i]);
		
		soma = soma + vetor [i];
	}
	printf ("Soma dos elementos do vetor: %d\n", soma);
}
