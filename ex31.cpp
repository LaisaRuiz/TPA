/*Programa: Exerc?cio 36
Fun??o: Calcule e mostre a tabuada do n?mero informado pelo usu?rio.
Autora: Laisa Cristiana Gon?alves Ruiz
Data: 25/11/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

int main(){
	setlocale(LC_ALL,"");
	int n=0,tabu=0,cont=0;
	printf("Informe um n?mero: ");
	scanf("%i",&n);
	while(cont<=10){
	         tabu=cont*n;
	     printf("%i x %i = %i\n",n,cont,tabu);
	      cont=cont+1;
        }
  }
	
