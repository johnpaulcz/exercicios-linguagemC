//ler num inteiro, mostrar se é impar ou par e se é positivo e negativo

#include <stdio.h>


int main (){
	int numero;
	
	printf ("Informe um numero inteiro: ");
	scanf ("%d", &numero);
	
	if (numero % 2 == 0)
		{ 
		if (numero >= 0)
			{
				printf ("%d eh par e positivo", numero);
			}
		else
			{
				printf ("%d eh par e negativo", numero);	
			}	
		}
		
	else
		{
		if (numero < 0)
			{
				printf ("%d eh impar e negativo", numero);
			}
		else
			{
				printf ("%d eh impar e positivo", numero);
			}	
		}
		
	}
