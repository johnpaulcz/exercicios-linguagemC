//qnt ganho por hora, numero de horas que trabalho, calcular sal�rio total

#include <stdio.h> //sdt = Standard (padr�o) | io = Entrada/Sa�da

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
