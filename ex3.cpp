/*Programa: Exercício 9c 
Função: Calcule a área de um circulo
Autora: Laisa Cristiana Gonçalves Ruiz
Data: 29/09/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

    int main(){
	setlocale(LC_ALL,"");
	int area=0, raio=0;
	const double PI=3.14;
	printf("Informe o raio do circulo: ");
	 scanf("%i", &raio);

	area = raio * raio * PI;

	printf("A área do circulo é: %i", area);
     }
