//calcular salário e salário excedente com base no código e numero de horas trabalhadas

#include <stdio.h>

int main (){
	int c, n, e=0;
	float salario, extra, salario_total;
	printf ("Informe o codigo do trabalhador: ");
	scanf ("%d", &c);
	printf ("Informe o numero de horas trabalhadas: ");
	scanf ("%d", &n);
	if (n>50)
		{
			e = n-50;
			salario = 50*10;
			extra = e*20;
			salario_total = salario + extra;
			printf ("Excesso de pagamento: R$ %.2f\n", extra);
			printf ("Salario total: R$ %.2f\n", salario_total);
		}
	else 
		{
			e = 0;
			salario = n*10;
			extra = 0;
			printf ("Excesso de pagamento:R$ %.2f\n", extra);
			printf ("Salario total:R$ %.2f\n", salario);	
		}
}
	
