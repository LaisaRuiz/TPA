/*Programa: Exerc�cio 23
Fun��o: Leia o nome de um aluno e sua media final 
Autora: Laisa Cristiana Gon�alves Ruiz
Data: 29/09/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

    int main(){
	setlocale(LC_ALL,"");
	float media=0;
	char nome[30];
	printf("Informe a m�dia do aluno: ");
	 scanf("%f", &media);
	 printf("Informe o nome do aluno: ");
	 scanf("%s", &nome);
		if (media >= 7){
		   printf("O aluno %s foi aprovado", nome);
		}else{
		   printf("O aluno %s foi reprovado", nome);
	} 
     }
