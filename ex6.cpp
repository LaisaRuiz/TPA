/*Programa: Exerc�cio 12
Fun��o: Calcule o valor de uma presta��o em atraso
Autora: Laisa Cristiana Gon�alves Ruiz
Data: 29/09/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

    int main(){
	setlocale(LC_ALL,"");
	float valorprest=0, taxa=0, total=0; 
	int tempo=0;
	printf("Informe o valor da presta��o: ");
	 scanf("%f", &valorprest);
	printf("Informe o valor da taxa/100 por m�s: ");
	 scanf("%f", &taxa);
	printf("Informe a quantidade de meses: ");
	 scanf("%i", &tempo);

	total = valorprest + (valorprest * (taxa/100) * tempo);

	printf("O valor da presta��o em atraso �: %f", total);
    
	}
