/*Programa: Exercício 25
Função: Leia o número do dia da semana, exeto Domingo 
Autora: Laisa Cristiana Gonçalves Ruiz
Data: 15/11/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

int main(){
	setlocale(LC_ALL,"");
	int n=0;
	printf("Informe o número do dia da semana de 1 à 7: \n");
	scanf("%i",&n);
	switch (n) {
	case 1 : printf(" Domingo");
	break;	
	case 2 : printf(" Segunda-feira");
	break;	
	case 3 : printf(" Terça-feira");
	break;
	case 4 : printf(" Quarta-feira");
	break;		
	case 5 : printf(" Quinta-feira");
	break;	
	case 6 : printf(" Sexta-feira");
	break;	
	case 7 : printf(" Sábado");
	break;	
	default : printf("Este número não corresponde a nenhum dia da semana.");
	break;
  } 
}

