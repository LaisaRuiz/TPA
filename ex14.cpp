/*Programa: Exercício 19
Função: Leia dois números e mostre o maior digitado   
Autora: Laisa Cristiana Gonçalves Ruiz
Data: 29/09/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

    int main(){
	setlocale(LC_ALL,"");
	float n1=0, n2=0;
	printf("Informe o 1° número: ");
	 scanf("%f", &n1);
	printf("Informe o 2° número: ");
	 scanf("%f", &n2);
		if (n1 > n2){
		   printf("O maior número é: %f" , n1);
		}else if (n2 > n1){
		   printf("O maior número é: %f" , n2);
		}else{
		   printf("Os números são iguais %f e %f", n1, n2);
	} 
     }
