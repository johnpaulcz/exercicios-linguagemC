//ler indice de polui��o: aceitavel entre 0.05 e 0.25 | maior que 0.25 at� 0.3 = ind�strias g1 supens�o | maior que 0.3 at� 0.4 industrias 1 e 2 intimidas e suspensas 
// maior que 0.4 at� 0.5 geral notificado e atividades paralizadas

#include <stdio.h>


int main (){
	float indice;
	
	printf ("Entre com o indice de poluicao: ");
	scanf ("%f", &indice);
	
	if (indice > 0.25 && indice <= 0.3)
		{
		printf ("Indutrias do grupo 1: SUSPENSAS");	
		}
	else if (indice > 0.3 && indice <= 0.4)
		{
		printf ("Indutrias grupo 1 e 2 INTIMIDAS E SUSPENSAS");
		}
	else if (indice > 0.4 && indice <= 0.5)
		{
		printf ("Todas as indutrias NOTIFICADAS E PARALISADAS");
		}
	else 
		{
		printf ("NIVEIS NORMAIS :) \n");
		}
}
