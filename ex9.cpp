/*Programa: Exerc�cio 14
Fun��o: Exiba o quociente e o resto de uma divis�o 
Autora: Laisa Cristiana Gon�alves Ruiz
Data: 29/09/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

    int main(){
	setlocale(LC_ALL,"");
	float divisor=0, dividendo=0, resto=0, quociente=0; 
	printf("Informe um n�mero: ");
	 scanf("%f", &divisor);
	printf("Informe um segundo n�mero: ");
	 scanf("%f", &dividendo);
	
	quociente = dividendo/divisor;

	printf("O quociente �: %f ", quociente);

	resto = quociente * divisor - dividendo;

	printf("O resto �: %f ", resto);
     }
