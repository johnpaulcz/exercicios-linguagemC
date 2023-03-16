//estoque médio de uma peça

#include <stdio.h>

int main (){
	int quant_min, quant_max;
	float estoque_medio;
	
	printf ("Informe a qualidade minima de peca: ");
	scanf ("%d", &quant_min);
	printf ("Informe a qualidade maxima de peca: ");
	scanf ("%d", &quant_max);
	
	estoque_medio = (quant_min+quant_max)/2;
	
	printf ("Estoque medio de pecas:%0.2f ", estoque_medio);
	
	
	}
