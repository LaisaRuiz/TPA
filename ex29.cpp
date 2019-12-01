/*Programa: Exerc?cio 34
Fun??o: Some os n?meros impares entre 1 e o valor digitado.
Autora: Laisa Cristiana Gon?alves Ruiz
Data: 24/11/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

int main(){
	setlocale(LC_ALL,"");
	int n=0, soma=0, cont=1;
	printf("Informe um n?mero: ");
	scanf("%i",&n);
	while (cont<=n){
		if(cont-(cont/2*2)==1){
			soma=soma+cont;
                }
		cont=cont+1;
        }
	printf("A soma ? %i",soma);

  }
