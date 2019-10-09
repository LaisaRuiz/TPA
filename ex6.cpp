/*Programa: Exercício 12
Função: Calcule o valor de uma prestação em atraso
Autora: Laisa Cristiana Gonçalves Ruiz
Data: 29/09/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

    int main(){
	setlocale(LC_ALL,"");
	float valorprest=0, taxa=0, total=0; 
	int tempo=0;
	printf("Informe o valor da prestação: ");
	 scanf("%f", &valorprest);
	printf("Informe o valor da taxa/100 por mês: ");
	 scanf("%f", &taxa);
	printf("Informe a quantidade de meses: ");
	 scanf("%i", &tempo);

	total = valorprest + (valorprest * (taxa/100) * tempo);

	printf("O valor da prestação em atraso é: %f", total);
    
	}
