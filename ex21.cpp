/*Programa: Exerc�cio 26
Fun��o: Apresnte o nome e o pre�o do lanche conforme o n�mero.
Autora: Laisa Cristiana Gon�alves Ruiz
Data: 20/11/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

int main(){
	setlocale(LC_ALL,"");
	int cod=0;
	printf ("|C�digo|      Nome        |\n");
	printf ("|  1   |    Hot Dog       |\n");
	printf ("|  2   |   X Salada       |\n");
	printf ("|  7   |   X Burguer      |\n");
	printf ("| 15   |   X Tudo         |\n");
	printf ("|  --  |  N�o Cadatrado   |\n");
	printf("Informe um codigo para saber o pre�o: \n");
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
		default : printf("C�digo n�o encontrado.");
		break;
		
	}
}
