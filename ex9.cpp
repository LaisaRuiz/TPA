/*Programa: Exercício 14
Função: Exiba o quociente e o resto de uma divisão 
Autora: Laisa Cristiana Gonçalves Ruiz
Data: 29/09/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

    int main(){
	setlocale(LC_ALL,"");
	float divisor=0, dividendo=0, resto=0, quociente=0; 
	printf("Informe um número: ");
	 scanf("%f", &divisor);
	printf("Informe um segundo número: ");
	 scanf("%f", &dividendo);
	
	quociente = dividendo/divisor;

	printf("O quociente é: %f ", quociente);

	resto = quociente * divisor - dividendo;

	printf("O resto é: %f ", resto);
     }
