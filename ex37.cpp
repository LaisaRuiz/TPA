/*Programa: Exerc�cio 42
Fun��o: Leia 10 valores e escreva quantos s�o negativos. 
Autora: Laisa Cristiana Gon�alves Ruiz
Data: 26/11/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

int main(){
	setlocale(LC_ALL,"");
	int n=0,cont=0,c2=0;
	for(cont=0;cont<10;cont++){
	    printf("Informe um n�mero: \n");
	    scanf("%i",&n);
		if(n<0){
		   c2=1+c2;
	}
             printf("A quantidade de valores negativos � %i\n",c2);
	        
        }
  }
