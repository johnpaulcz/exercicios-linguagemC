//receber um código numerico, vetor de 5 posições, codigo for zero é pra terminar programa 
//código for 1 vetor na ordem direta
//codigo for 2 vetor na ordem inversa

#include <stdio.h> //sdt = Standard (padrão) | io = Entrada/Saída

int main(){ 
	int vetor[5];
	int codigo;
	
	printf ("Digite um codigo:\nCodigo - 0\nCodigo - 1\nCodigo - 2\n ");
	scanf ("%d", &codigo);
	if (codigo != 0)
	{
		for (int i = 0; i < 5; i++)
		{
			printf ("Informe o numero %d/5\n", i+1);
			scanf ("%d", &vetor[i]);
		}
		if (codigo == 1)
		{
			for(int i = 0; i < 5; i++)
			{
				printf ("%d", vetor[i]);
			}
		}
		if (codigo == 2)
		{
			for(int i = 4; i >= 0; i--)
			{
				printf ("%d", vetor[i]);
			}
		}
	}
}
