/*Programa: Exercício 11
Função: Calcule o preço de venda de um terreno retangular
Autora: Laisa Cristiana Gonçalves Ruiz
Data: 29/09/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

    int main(){
	setlocale(LC_ALL,"");
	float mq=0, frente=0, lado=0, terreno=0, total=0;
	printf("Informe o valor da frente do terreno: ");
	 scanf("%f", &frente);
	printf("Informe o valor do lado do terreno: ");
	 scanf("%f", &lado);
	printf("Informe o preço do metro quadrado: ");
	 scanf("%f", &mq);

	terreno = frente * lado;
	total = terreno * mq;

	printf("O preço de venda é: %f", total);
     }
