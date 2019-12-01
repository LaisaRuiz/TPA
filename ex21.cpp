/*Programa: Exercício 26
Função: Apresnte o nome e o preço do lanche conforme o número.
Autora: Laisa Cristiana Gonçalves Ruiz
Data: 20/11/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

int main(){
	setlocale(LC_ALL,"");
	int cod=0;
	printf ("|Código|      Nome        |\n");
	printf ("|  1   |    Hot Dog       |\n");
	printf ("|  2   |   X Salada       |\n");
	printf ("|  7   |   X Burguer      |\n");
	printf ("| 15   |   X Tudo         |\n");
	printf ("|  --  |  Não Cadatrado   |\n");
	printf("Informe um codigo para saber o preço: \n");
	scanf("%i",&cod);
	switch (cod) {
		case 1: printf("Hot Dog - R$ 3,50");
		break;
		case 2: printf("X Salada - R$ 5,00");
		break;
		case 7: printf("X Burguer - R$ 8,90");
		break;
		case 15: printf("X Tudo - R$ 12,70");
		break;
		default : printf("Código não encontrado.");
		break;
		
	}
}
