/*Programa: Exercício 47
Função: Sabendo que a serie de Fibonnacci é a seguinte: 0,1,1,2,3,5,8; exibe o nésimo elemento. 
Autora: Laisa Cristiana Gonçalves Ruiz
Data: 26/11/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

int main(){
	setlocale(LC_ALL,"");
	int n=0,cont=0,f=0,a=1,b=0, soma=0, l=0;
	printf("Informe uma posição: \n");
	    scanf("%i",&n);
	for(cont=1;cont<n;cont++){
		f=a+b;
		a=b;
		b=f;
	}
             printf(" O número da posição %i é %i",n,f);
	        
        }
