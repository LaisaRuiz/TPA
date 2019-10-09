/*Programa: Exercício 21
Função: Leia três números inteiros e mostre em ordem crescente   
Autora: Laisa Cristiana Gonçalves Ruiz
Data: 29/09/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

    int main(){
	setlocale(LC_ALL,"");
	int a=0, b=0, c=0;
	printf("Informe o 1° número: ");
	 scanf("%i", &a);
	printf("Informe o 2° número: ");
	 scanf("%i", &b);
	printf("Informe o 3° número: ");
	 scanf("%i", &c);
		if (a < b and a < c and b < c ){
		   printf("%i,%i e %i" , a, b, c);
		}else if(a < b and a < c and c < b ){
		   printf("%i,%i e %i" , a, c, b);
		}else if(b < a and b < c and c < a ){
		   printf("%i,%i e %i" , b, c, a);
		}else if (b < a and b < c and a < c ){
		   printf("%i,%i e %i" , b, a, c);
		}else if (c < a and c < b and a < b ){
		   printf("%i,%i e %i" , c, a, b);
		}else if (c < a and c < b and b < a ){
		   printf("%i,%i e %i" , c, b, a);
		}
	} 
