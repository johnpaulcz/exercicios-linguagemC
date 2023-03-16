//joão pescou tantos kg de peixe, tem que saber se teve excesso e ele vai pagar 4 reais por kg excedente

#include <stdio.h>

int main (){
	float p, e=0, m=0;
	printf ("Informe o tanto de peixe que voce pescou em kg: ");
	scanf ("%f", &p);
	
	if (p>50)
		{
			e = p-50;
			m = e*4;
			printf ("peso informado = %.2f\n", p);
			printf ("excesso = %.2f\n", e);
			printf ("multa = %.2f reais", m);
			
		}
	else
		{
			m = 0;
			e = 0;
			printf ("peso informado = %.2f\n", p);
			printf ("excesso = %.2f\n", e);
			printf ("multa = %.2f reais", m);
		}
	
}
