/*Programa: Exercício 9b 
Função: Calcule a área de um triângulo
Autora: Laisa Cristiana Gonçalves Ruiz
Data: 29/09/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

    int main(){
	setlocale(LC_ALL,"");
	int area=0, base=0, altura=0;
	printf("Informe a base do triângulo: ");
	 scanf("%i", &base);
	printf("Informe a altura do triângulo: ");
	 scanf("%i", &altura);

	area = base * altura / 2;

	printf("A área do triângulo é: %i", area);
     }
