//com base na altura o programa d� o peso ideal

#include <stdio.h> //sdt = Standard (padr�o) | io = Entrada/Sa�da

int main(){
	float altura, peso_ideal;
	
	printf ("Informe a altura: ");
	scanf ("%f", &altura);
	
	peso_ideal = (72.7 * altura) - 58;
	
	printf ("O seu peso ideal seria: %.2f", peso_ideal);
	
}
