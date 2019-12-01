/*Programa: Exerc?cio 39
Fun??o: Leia 5 n?meros e mostre o quadrado de cada um.
Autora: Laisa Cristiana Gon?alves Ruiz
Data: 25/11/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

int main(){
	setlocale(LC_ALL,"");
	int n=0,cont=0, quadro=0;
	for(cont;cont<=5;cont++){
	    printf("Informe um n?mero: ");
	    scanf("%i",&n);
		quadro=n*n;
             printf("O quadrado de %i = %i\n",n,quadro);
	        
        }
  }
	
