/*Programa: Exerc�cio 17
Fun��o: Leia um n�mero e mostre se ele � positivo ou negativo  
Autora: Laisa Cristiana Gon�alves Ruiz
Data: 29/09/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

    int main(){
	setlocale(LC_ALL,"");
	float numero=0;
	printf("Informe um n�mero: ");
	scanf("%f", &numero);
	if (numero > 0){
		printf("O n�mero � positivo");
	}else if (numero < 0){
		printf("O n�mero � negativo");
	}else {
		printf("O n�mero � 0");
	} 
    }
