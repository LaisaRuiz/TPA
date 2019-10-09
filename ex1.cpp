/*Programa: Exercício 9a
Função: Calcule a área de um retângulo
Autora: Laisa Cristiana Gonçalves Ruiz
Data: 29/09/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

    int main(){
	setlocale(LC_ALL,"");
	int area=0, base=0, altura=0;
	printf("Informe a base do retângulo: ");
	scanf("%i", &base);
	printf("Informe a altura do retângulo: ");
	scanf("%i", &altura);

	area = base * altura;

	printf("A área do retângulo é: %i", area);
	
    }
    
