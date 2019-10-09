/*Programa: Exercício 13
Função: Calcule o salário de um funcionario e o percentual de aumento e seu novo salário
Autora: Laisa Cristiana Gonçalves Ruiz
Data: 29/09/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

    int main(){
	setlocale(LC_ALL,"");
	float valorsal=0, percentuau=0, total=0;
	printf("Informe o valor do salário: ");
	 scanf("%f", &valorsal);
	printf("Informe o percentual de aumento: ");
	 scanf("%f", &percentuau);

	total = valorsal + (valorsal * (percentuau/100));

	printf("O valor do novo salário é: %f", total);
     }
