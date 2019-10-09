/*Programa: Exercício 15
Função: Leia um número e verifique se é maior que 100 
Autora: Laisa Cristiana Gonçalves Ruiz
Data: 29/09/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

    int main(){
	setlocale(LC_ALL,"");
	float nume=0, nume1=0;
	printf("Informe um número: ");
	 scanf("%f", &nume);
	if (nume > 100){
		nume = nume1 + 150;
    printf("O número é maior que 100 ");
	} else
	printf(" O valor do número é: %f");
	 
     }
