/*Programa: Exerc�cio 41
Fun��o: Leia 50 n�meros e mostre a soma e a mede entre eles.
Autora: Laisa Cristiana Gon�alves Ruiz
Data: 26/11/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

int main(){
	setlocale(LC_ALL,"");
	int n=0,cont=0,n2=0,media=0;
	for(cont=0;cont<50;cont++){
	    printf("Informe um n�mero: \n");
	    scanf("%i",&n);
		n=n2+n;
		n2=n;
	}
             printf("A soma � %i\n",n);
	     media=n/50;
             printf("A media � %i",media);
	        
        }

