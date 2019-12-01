/*Programa: Exerc?cio 37
Fun??o: Leia e escreva o nome de 5 pessoas.
Autora: Laisa Cristiana Gon?alves Ruiz
Data: 25/11/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

int main(){
	setlocale(LC_ALL,"");
	char nome[30];
	int cont=0;
	for(cont=0;cont<5;cont++){
	     printf("Escreva um nome: ");
	     gets(nome);
    	     fflush(stdin);
             printf("%s\n",nome);
        }
  }
	
