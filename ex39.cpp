/*Programa: Exerc�cio 44
Fun��o: Leia 10 n�meros e exibir o maior e o menor digitado. 
Autora: Laisa Cristiana Gon�alves Ruiz
Data: 26/11/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

int main(){
	setlocale(LC_ALL,"");
	int n=0,cont=0,maior=0,menor=0;
	printf("Informe um n�mero: \n");
	    scanf("%i",&maior);
	    menor=maior;
	for(cont=0;cont<10;cont++){
	    printf("Informe um n�mero: \n");
	    scanf("%i",&n);
		if(n>maior){
		   maior=n;
	}	else if(n<maior){
		   menor=n;
	}
             printf("O n�mero maior � %i e o menor � %i \n",maior,menor);
	        
        }
  }
