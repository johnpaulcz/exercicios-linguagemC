//vetor 1 com 10 elementos e vetor 2 com 10 elementos, fazer o somatório entre os dois vetores 

#include <stdio.h> //sdt = Standard (padrão) | io = Entrada/Saída

int main(){
	int vetor1[10];
	int vetor2[10];
	int vetor_soma[10];
	for (int i = 0; i < 10; i++)
	{
		printf ("Digite um valor para o vetor 1: ");
		scanf ("%d", &vetor1[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		printf ("Digite um valor para o vetor 2: ");
		scanf ("%d", &vetor2[i]);
	
		vetor_soma[i] = vetor1 [i] + vetor2 [i];
	}
	for (int i = 0; i < 10; i++)
	{
		printf ("%d\n", vetor_soma[i]);
	}
}
