//converter metros para cm

#include <stdio.h> //sdt = Standard (padrão) | io = Entrada/Saída

int main(){ 
	int valor_metro, convert;
	printf ("Informe um valor em metros: ");
	scanf ("%d", &valor_metro);
	
	convert = valor_metro*100;
	printf (" %d metros = : %d centimetros",valor_metro, convert);
	

}
