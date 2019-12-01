/*Programa: Exerc?cio 38
Fun??o: Leia 5 n?meros e mostre a metade de cada um.
Autora: Laisa Cristiana Gon?alves Ruiz
Data: 25/11/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

int main(){
	setlocale(LC_ALL,"");
	int cont=0;
	float n=0, metade=0;
	for(cont=0;cont<=5;cont++){
	    printf("Informe um n?mero: ");
	    scanf("%f",&n);
		metade=n/2;
             printf("%f\n",metade);
	        
        }
  }
