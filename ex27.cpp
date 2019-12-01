/*Programa: Exerc?cio 32
Fun??o: Mostre todos os n?meros pares digitados.
Autora: Laisa Cristiana Gon?alves Ruiz
Data: 24/11/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

int main(){
	setlocale(LC_ALL,"");
	int n1=0,n2=0,troca=0,resto=0;
	printf("Informe um n?mero:\n ");
	scanf("%i",&n1);
	printf("Informe um n?mero: \n");
	scanf("%i",&n2);
	if(n2<n1){
		troca=n1;
		n1=n2;
		n2=troca;
	}
	while(n1<n2){
		n1++;
		if(((2*(n1/2))-n1)==0){
			if(n1!=n2){
				printf("%i ",n1);
			}
        }				
   }
	
}
