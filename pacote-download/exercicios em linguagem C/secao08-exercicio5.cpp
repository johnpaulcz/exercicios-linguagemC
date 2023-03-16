//vetor com 10 elementos, mostrar numeros superiores a 50 e suas posições, mostrar se nao existiu numeros  assim

#include <stdio.h> //sdt = Standard (padrão) | io = Entrada/Saída

int main(){ 
	int vetor[10];
	char tem_maior_50 = 0 ;
	for (int i = 0; i < 10; i++)
	{
		printf ("Digite um valor para o vetor %d/10: ", i+1);
		scanf ("%d", &vetor[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		if (vetor [i] > 50)
		{
			printf ("%d pertece a posicao %d\n", vetor[i], i);
			tem_maior_50 = 1;
		}
	}
	if (tem_maior_50 <1)
	{
		printf ("Não existe nenhum numero maior que 50");
	}
}

