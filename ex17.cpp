/*Programa: Exercício 22
Função: Classifique um nadador de determinada idade nas categorias (Infantil-5 a 11 anos /Juvenil-12 a 17 anos /Adultos-maiores de 18 anos)  
Autora: Laisa Cristiana Gonçalves Ruiz
Data: 29/09/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

    int main(){
	setlocale(LC_ALL,"");
	int idade=0;
	printf("Informe a idade do nadador: ");
	 scanf("%i", &idade);
		if (idade>=5 or idade<=11){
		   printf("Esse nadador pertence a cetegoria INFANTIL");
		}else if(idade>=12 or idade<=17){
		   printf("Esse nadador pertence a categoria JUVENIL");
		}else if(idade>=18){
		   printf("Esse nadador pertence a categoria ADULTO");
		}
	} 
