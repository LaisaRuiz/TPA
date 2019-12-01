/*Programa: Exerc?cio 31
Fun??o: Mostre o quadrado de um n?mero e saia quando o ?suario digitar 0.
Autora: Laisa Cristiana Gon?alves Ruiz
Data: 24/11/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

int main(){
	setlocale(LC_ALL,"");
	int cont=1, n=0,  num=1,  quadro=0;
	printf("Quadrado de um numero\n");
	while (num != 0){
		printf("Informe um numero inteiro: \n");
		scanf("%i",&n);
		quadro=n*n;
		printf("O quadrado de %i e %i \n",n,quadro);
		cont=cont+1;
        }
	printf("FIM");
}
    	
