//pede dois numeros e imprime a soma

#include <stdio.h>

int main (){
	int numero1, numero2, soma;
	printf ("informe um numero: ");
	scanf ("%d", &numero1);
	printf ("informe mais um numero: ");
	scanf ("%d", &numero2);
	
	soma = numero1 + numero2;
	
	printf ("Soma dos numeros: %d", soma);
	
}
