//carregar vetor com 10 numero e mostrar a ordem inversa

#include <stdio.h> //sdt = Standard (padrão) | io = Entrada/Saída

int main(){
	int vetor[10];
	for (int i = 0; i < 10; i++)
	{
		printf ("Digite um valor para o vetor: ");
		scanf ("%d", &vetor[i]);
	}

	for (int i = 9; i >= 0 ; i--)
	{
		printf ("%d\n", vetor[i]);
	}
}
