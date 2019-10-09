/*Programa: Exercício 24
Função: Mostre se o numero é par ou impar
Autora: Laisa Cristiana Gonçalves Ruiz
Data: 29/09/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

    int main(){
	setlocale(LC_ALL,"");
	int nume=0;
	printf("Informe um número: ");
	 scanf("%i", &nume);
		if (nume%2==0){
		   printf("O número é par");
		}else{
		   printf("O número é impar");
	} 
     }
