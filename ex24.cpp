/*Programa: Exerc�cio 29
Fun��o: Receber dois valores e fazer a opera��o desejada pelo usu�rio.
Autora: Laisa Cristiana Gon�alves Ruiz
Data: 20/11/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

int main(){
	setlocale(LC_ALL,"");
	float n1=0, n2=0, r=0;
	int c=0;
	
	printf("Informe um n�mero: ");
	scanf("%f",&n1);
	printf("Informe outro n�mero: ");
	scanf("%f",&n2);
	printf ("|C�digo|       Opera��o      |\n");
	printf ("|  1   |        Adi��o       |\n");
	printf ("|  2   |      Subtra��o      |\n");
	printf ("|  3   |     Multiplica��o   |\n");
	printf ("|  4   |       Divis�o       |\n");
	printf("Escolha a opera��o: ");
	scanf("%i",&c);
	switch (c){
		case 1: r = n1+n2;
		printf("%f",r);
		break;
		case 2: r=n1-n2;
		printf("%f",r);
		break;
		case 3: r=n1*n2;
		printf("%f",r);
		break;
		case 4: r=n1/n2;
		printf("%f",r);
		break;
		default : ("Nulo");
		break;
	}
}
