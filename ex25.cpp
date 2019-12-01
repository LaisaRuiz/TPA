/*Programa: Exercício 30
Função: Leia e mostre o nome de 50 pessoas.
Autora: Laisa Cristiana Gonçalves Ruiz
Data: 20/11/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

int main(){
	setlocale(LC_ALL,"");
	char nome[30];
	int cont=1;
	while (cont <= 50){
		printf("Informe o nome:");
		gets(nome);
    	fflush(stdin);
    	printf("Bom dia %s!\n\n",nome);
    	system ("pause");
    	system("cls");
    	cont=cont+1;
	}
}
	
