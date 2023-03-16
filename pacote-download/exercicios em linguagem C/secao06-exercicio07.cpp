//ler 4 numeros, fazer o quadrado de cada, se valor do 3º for >=1000 mostra-lo se não mostrar os valores lidos e os quadrados

#include <stdio.h>


int main (){
	int n1, n2, n3, n4, q1, q2, q3, q4;
	
	printf ("Informe o 1 numero: ");
	scanf ("%d", &n1);
	printf ("Informe o 2 numero: ");
	scanf ("%d", &n2);
	printf ("Informe o 3 numero: ");
	scanf ("%d", &n3);
	printf ("Informe o 4 numero: ");
	scanf ("%d", &n4);
	
	if (n3>=100)
	{
		printf ("Valor N3 =%d", n3);
	}
	else
	{
	
		q1=n1*n1;
		q2=n2*n2;
		q3=n3*n3;
		q4=n4*n4;
		printf ("Numeros informados foram: %d | %d | %d | %d\n", n1, n2, n3, n4);
		printf ("Quadrado dos numeros informados sao: %d | %d | %d | %d", q1, q2, q3, q4);
	}
}
