/*Programa: Exerc�cio 18
Fun��o: Leia um n�mero e se for maior que 5 e menor que 20 exiba seu cubo   
Autora: Laisa Cristiana Gon�alves Ruiz
Data: 29/09/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

    int main(){
	setlocale(LC_ALL,"");
	int numero=0, cubo=0;
	printf("Informe um n�mero: ");
	 scanf("%i", &numero);
	if (numero > 5) & (20 > numero){
	 cubo = numero **3
	printf("O cubo do n�mero �: %i ", cubo);
	} else {
	printf("O n�mero �: %i", numero);
	} 
     }
