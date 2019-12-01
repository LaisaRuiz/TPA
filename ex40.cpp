/*Programa: Exercício 45
Função: Leia 2 valore e calcule a soma dos inteiros entre os valores lidos. 
Autora: Laisa Cristiana Gonçalves Ruiz
Data: 26/11/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

int main(){
	setlocale(LC_ALL,"");
	int n1=0,cont=0,n2=0,troca=0,soma=0;
	printf("Informe um número: \n");
	    scanf("%i",&n1);
	printf("Informe um número: \n");
	    scanf("%i",&n2);
	if(n1>n2){
		troca=n1;
		n1=n2;
		n2=troca;
	}
	for(cont=n1+1;cont<n2;cont++){
		soma=soma+cont;
	}
             printf("%i",soma);
	        
        }
