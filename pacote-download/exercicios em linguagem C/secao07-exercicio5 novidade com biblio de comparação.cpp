//ler 10 valores inteiros e positivos, encontrar MAIOR, encontrar MENOR, calcular média deles

#include <stdio.h>
#include <string.h>


int main (){
	char nome[100], senha[100];
	//int;
	printf ("Informe o nome: ");
	gets(nome);
	printf ("Informe a senha: ");
	gets(senha);
	
	while (!strcmp(nome, senha))
	{
		printf ("Senha nao pode ser igual ao nome\n");
		printf ("Informe o nome: ");
		gets(nome);
		printf ("Informe a senha: ");
		gets(senha);	
	}
	printf ("Dados digitados\n");
}
