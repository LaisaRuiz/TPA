/*Programa: Exerc�cio 20
Fun��o: Leia tr�s n�meros e mostre o maior digitado   
Autora: Laisa Cristiana Gon�alves Ruiz
Data: 29/09/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

    int main(){
	setlocale(LC_ALL,"");
	float n1=0, n2=0, n3=0;
	printf("Informe o 1� n�mero: ");
	 scanf("%f", &n1);
	printf("Informe o 2� n�mero: ");
	 scanf("%f", &n2);
	printf("Informe o 3� n�mero: ");
	 scanf("%f", &n3);
		if (n1 > n2 and n1 > n3){
		   printf("O maior n�mero �: %f" , n1);
		}else if (n2 > n1 and n2 > n3){
		   printf("O maior n�mero �: %f" , n2);
		}else if (n3 > n1 and n3 > n2){
		   printf("O maior n�mero �: %f" , n3);
		}else{
		   printf("Os n�meros s�o iguais %f, %f e %f", n1, n2, n3);
	} 
     }
