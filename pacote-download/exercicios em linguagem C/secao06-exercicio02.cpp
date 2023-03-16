//ler um numero, positivo armazenar em A; negativo armazenar em B e monstrar o numero

#include <stdio.h> //sdt = Standard (padrão) | io = Entrada/Saída

int main(){
	
	int numero, A, B;
	printf ("Digite um numero: ");
	scanf ("%d", &numero);
	if (numero >= 0)
		{
			A = numero;
			printf ("%d eh POSITIVO", A);
		}
	else
		{
			B = numero;
			printf ("%d eh NEGATIVO", B);
		}
}
