/*Programa: Exercício 42
Função: Leia 10 valores e escreva quantos são negativos. 
Autora: Laisa Cristiana Gonçalves Ruiz
Data: 26/11/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

int main(){
	setlocale(LC_ALL,"");
	int n=0,cont=0,c2=0;
	for(cont=0;cont<10;cont++){
	    printf("Informe um número: \n");
	    scanf("%i",&n);
		if(n<0){
		   c2=1+c2;
	}
             printf("A quantidade de valores negativos é %i\n",c2);
	        
        }
  }
