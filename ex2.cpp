/*Programa: Exerc�cio 9b 
Fun��o: Calcule a �rea de um tri�ngulo
Autora: Laisa Cristiana Gon�alves Ruiz
Data: 29/09/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

    int main(){
	setlocale(LC_ALL,"");
	int area=0, base=0, altura=0;
	printf("Informe a base do tri�ngulo: ");
	 scanf("%i", &base);
	printf("Informe a altura do tri�ngulo: ");
	 scanf("%i", &altura);

	area = base * altura / 2;

	printf("A �rea do tri�ngulo �: %i", area);
     }
