//ler altura, ler o sexo, calcular peso ideal de acordo com o sexo

#include <stdio.h> //sdt = Standard (padrão) | io = Entrada/Saída
#include <ctype.h>

int main (){
	float altura, peso_ideal;
	char sexo;
	
	printf ("Informe a sua altura: \n");
	scanf ("%f", &altura);
	printf ("Informe o seu sexo: (M ou F): \n");
	scanf ("%s", &sexo);
	
	if (tolower(sexo) == 'M')
		{
			peso_ideal = (72.7*altura)-58;
			printf ("Seu sexo eh masculino, portanto seu peso ideal eh: %.2f", peso_ideal);
		}
	else if (toupper(sexo) == 'F')
		{
			peso_ideal = (62.1*altura)-44.7;
			printf ("Seu sexo eh feminino, portanto seu peso ideal eh: %.2f", peso_ideal);
		}
	else if (tolower(sexo) != 'M' && tolower(sexo) != 'F')
		{
			printf ("Sexo nao reconhecido");
		
		}
}
