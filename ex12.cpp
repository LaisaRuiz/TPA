/*Programa: Exercício 17
Função: Leia um número e mostre se ele é positivo ou negativo  
Autora: Laisa Cristiana Gonçalves Ruiz
Data: 29/09/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

    int main(){
	setlocale(LC_ALL,"");
	float numero=0;
	printf("Informe um número: ");
	scanf("%f", &numero);
	if (numero > 0){
		printf("O número é positivo");
	}else if (numero < 0){
		printf("O número é negativo");
	}else {
		printf("O número é 0");
	} 
    }
