/*Programa: Exerc�cio 16
Fun��o: Receba dois n�meros inteiros e exiba em ordem inversa
Autora: Laisa Cristiana Gon�alves Ruiz
Data: 29/09/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

    int main(){
	setlocale(LC_ALL,"");
	int numea1=0, numeb2=0, numec3=0;
	printf("Informe o valor do 1� n�mero: ");
	 scanf("%i", &numea1);
	printf("Informe o valor do 2� n�mero: ");
	 scanf("%i", &numeb2);
	
	numec3 = numea1;
	numea1 = numeb2;
	numeb2 = numec3;
	
	printf("Os valores trocados s�o: %i e %i", numea1,  numeb2);
	 
     }
