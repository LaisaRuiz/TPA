/*Programa: Exerc�cio 9a
Fun��o: Calcule a �rea de um ret�ngulo
Autora: Laisa Cristiana Gon�alves Ruiz
Data: 29/09/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

    int main(){
	setlocale(LC_ALL,"");
	int area=0, base=0, altura=0;
	printf("Informe a base do ret�ngulo: ");
	scanf("%i", &base);
	printf("Informe a altura do ret�ngulo: ");
	scanf("%i", &altura);

	area = base * altura;

	printf("A �rea do ret�ngulo �: %i", area);
	
    }
    
