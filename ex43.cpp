/*Programa: Exerc�cio 48
Fun��o: Receba um valor inteiro e exiba todos os n�meros primos at� ele. 
Autora: Laisa Cristiana Gon�alves Ruiz
Data: 26/11/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

int main(){
	setlocale(LC_ALL,"");
	int n=0,cont=0,cont2=0,m=0,rest=0,primo=0,c2=0,c=0;
	printf("Informe um n�mero: \n");
	    scanf("%i",&n);
	while (cont<n){
		while(cont2<cont){
			if(cont%cont2==0){
				if(cont2==cont){
					printf("%i",cont2);
				}
			}
			cont2++;
		}
		cont++;
	}
}
