//qnt ganho por hora, numero de horas que trabalho, calcular salário total

#include <stdio.h> //sdt = Standard (padrão) | io = Entrada/Saída

int main(){
	int numero, P, I;
	printf ("informe um numero: ");
	scanf ("%d", &numero);
	
	if (numero % 2 == 0)
		{
			P = numero;
			printf ("%d eh par", P);
		}
	else 
		{
			I = numero;
			printf ("%d eh impar", I);
		}
}
