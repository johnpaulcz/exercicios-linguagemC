//qnt ganho por hora, numero de horas que trabalho, calcular sal�rio total

#include <stdio.h> //sdt = Standard (padr�o) | io = Entrada/Sa�da

int main(){
	float valor_hora, qnt_horas, salario_total;
	printf ("Informe qual o valor da hora trabalhada: ");
	scanf("%f", &valor_hora);
	printf ("Informe a quantidade de horas que trabalhou no mes: ");
	scanf ("%f", &qnt_horas);
	
	salario_total = valor_hora * qnt_horas;
	
	printf ("Salario total: %.2f", salario_total);
	
}
