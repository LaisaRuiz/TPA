/*Programa: Exerc�cio 15
Fun��o: Leia um n�mero e verifique se � maior que 100 
Autora: Laisa Cristiana Gon�alves Ruiz
Data: 29/09/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

    int main(){
	setlocale(LC_ALL,"");
	float nume=0, nume1=0;
	printf("Informe um n�mero: ");
	 scanf("%f", &nume);
	if (nume > 100){
		nume = nume1 + 150;
    printf("O n�mero � maior que 100 ");
	} else
	printf(" O valor do n�mero �: %f");
	 
     }
