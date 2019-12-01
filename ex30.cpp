/*Programa: Exerc?cio 35
Fun??o: Calcule e mostre a tabuada do 7
Autora: Laisa Cristiana Gon?alves Ruiz
Data: 25/11/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

int main(){
	setlocale(LC_ALL,"");
	int tabu=0, cont=0;
	while(cont<=10){
		tabu=cont*7;
	   printf("%i x 7 = %i\n",cont,tabu);
	   cont=cont+1;
        }
  }

