/*Programa: Exerc�cio 24
Fun��o: Mostre se o numero � par ou impar
Autora: Laisa Cristiana Gon�alves Ruiz
Data: 29/09/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

    int main(){
	setlocale(LC_ALL,"");
	int nume=0;
	printf("Informe um n�mero: ");
	 scanf("%i", &nume);
		if (nume%2==0){
		   printf("O n�mero � par");
		}else{
		   printf("O n�mero � impar");
	} 
     }
