//com base na altura o programa dá o peso ideal

#include <stdio.h> //sdt = Standard (padrão) | io = Entrada/Saída

int main(){
	float altura, peso_ideal;
	
	printf ("Informe a altura: ");
	scanf ("%f", &altura);
	
	peso_ideal = (72.7 * altura) - 58;
	
	printf ("O seu peso ideal seria: %.2f", peso_ideal);
	
}
