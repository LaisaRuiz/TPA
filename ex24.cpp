/*Programa: Exercício 29
Função: Receber dois valores e fazer a operação desejada pelo usuário.
Autora: Laisa Cristiana Gonçalves Ruiz
Data: 20/11/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

int main(){
	setlocale(LC_ALL,"");
	float n1=0, n2=0, r=0;
	int c=0;
	
	printf("Informe um número: ");
	scanf("%f",&n1);
	printf("Informe outro número: ");
	scanf("%f",&n2);
	printf ("|Código|       Operação      |\n");
	printf ("|  1   |        Adição       |\n");
	printf ("|  2   |      Subtração      |\n");
	printf ("|  3   |     Multiplicação   |\n");
	printf ("|  4   |       Divisão       |\n");
	printf("Escolha a operação: ");
	scanf("%i",&c);
	switch (c){
		case 1: r = n1+n2;
		printf("%f",r);
		break;
		case 2: r=n1-n2;
		printf("%f",r);
		break;
		case 3: r=n1*n2;
		printf("%f",r);
		break;
		case 4: r=n1/n2;
		printf("%f",r);
		break;
		default : ("Nulo");
		break;
	}
}
