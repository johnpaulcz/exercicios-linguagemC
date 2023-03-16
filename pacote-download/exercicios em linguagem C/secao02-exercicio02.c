#include <stdio.h> //sdt = Standard (padrão) | io = Entrada/Saída

int main(){
	int num1, num2, soma, multiplica;

	printf ("Informe o 1 numero: ");
	scanf ("%d", &num1);

	printf ("Informe o 2 numero: ");
	scanf ("%d", &num2);

	soma=num1+num2;
	multiplica=num1*num2;

	printf ("Numero %d + numero %d = %d \n", num1, num2, soma);
	printf ("Numero %d x numero %d = %d", num1, num2, multiplica);

	return 0;
}

