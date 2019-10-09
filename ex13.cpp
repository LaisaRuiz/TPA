/*Programa: Exercício 18
Função: Leia um número e se for maior que 5 e menor que 20 exiba seu cubo   
Autora: Laisa Cristiana Gonçalves Ruiz
Data: 29/09/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

    int main(){
	setlocale(LC_ALL,"");
	int numero=0, cubo=0;
	printf("Informe um número: ");
	 scanf("%i", &numero);
	if (numero > 5) & (20 > numero){
	 cubo = numero **3
	printf("O cubo do número é: %i ", cubo);
	} else {
	printf("O número é: %i", numero);
	} 
     }
