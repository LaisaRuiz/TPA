/*Programa: Exerc�cio 10
Fun��o: Calcule o quadrado da soma de tres n�meros
Autora: Laisa Cristiana Gon�alves Ruiz
Data: 29/09/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

    int main(){
	setlocale(LC_ALL,"");
	int nume1=0, nume2=0, nume3=0, soma=0, quadrado=0;
	printf("Informe o valor do 1� n�mero: ");
	 scanf("%i", &nume1);
	printf("Informe o valor do 2� n�mero: ");
	 scanf("%i", &nume2);
	printf("Informe o valor do 3� n�mero: ");
	 scanf("%i", &nume3);

	soma = nume1 + nume2 + nume3;
	quadrado = soma * soma;

	printf("O quadrado da soma �: %i", quadrado);
     }
    
