/*Programa: Exercício 14
Função: Calcule a media de um aluno 
Autora: Laisa Cristiana Gonçalves Ruiz
Data: 29/09/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

    int main(){
	setlocale(LC_ALL,"");
	float nota1=0, nota2=0, nota3=0, nota4=0, media=0;
	printf("Informe o valor da 1° nota: ");
	 scanf("%f", &nota1);
	printf("Informe o valor da 2° nota: ");
	 scanf("%f", &nota2);
	printf("Informe o valor da 3° nota: ");
	 scanf("%f", &nota3);
	printf("Informe o valor da 4° nota: ");
	 scanf("%f", &nota4);

	media = (nota1 + nota2 + nota3 + nota4)/4;

	printf("A média desse aluno é: %f", media);
     }
