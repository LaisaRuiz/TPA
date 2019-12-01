/*Programa: Exerc?cio 40
Fun??o: Leia a media anual de 5 alunos.
Autora: Laisa Cristiana Gon?alves Ruiz
Data: 26/11/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

int main(){
	setlocale(LC_ALL,"");
	float n1=0,n2=0,media=0,cont=0;
	char nome[30];
	for(cont=0;cont<=5;cont++){
	   printf("Escreva o nome do aluno: \n");
	     gets(nome);
    	     fflush(stdin);
    	printf("Informe a primeira nota: ");
    		scanf("%f",&n1);
    	printf("Informe a segunda nota: ");
    		scanf("%f",&n2);
    		media=(n1+n2)/2;
    		 printf("A media do/a aluno/a %s e %f\n",nome,media);
	        
            }

        }

