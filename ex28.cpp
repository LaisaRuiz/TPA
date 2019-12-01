/*Programa: Exerc?cio 33
Fun??o: Calcule o fatorial de um n?mero.
Autora: Laisa Cristiana Gon?alves Ruiz
Data: 24/11/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

int main(){
	setlocale(LC_ALL,"");
	int n=0,fato=1, cont=0;
	printf("Informe um n?mero: ");
	scanf("%i",&n);
	if (n<0){ 
	   printf("N?o calculavel");
	}else{
	 cont = n;
	while (cont>1){
	      fato=fato*cont;
	      cont=cont-1;
        }
		printf("O fatorial de %i ? %i",n,fato);
       }
  }
