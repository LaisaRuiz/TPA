/*Programa: Exercício 43
Função: Leia 10 números e exibir o maior digitado. 
Autora: Laisa Cristiana Gonçalves Ruiz
Data: 26/11/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

int main(){
	setlocale(LC_ALL,"");
	int n=0,cont=0,n2=0;
	for(cont=0;cont<10;cont++){
	    printf("Informe um número: \n");
	    scanf("%i",&n);
		if(n==1){
		   n2=n;
	}	else if(n>n2){
		   n2=n;
	}
             printf("O maior número é %i\n",n2);
	        
        }
  }
