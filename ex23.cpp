/*Programa: Exerc�cio 28
Fun��o: Digite o numero do m�s e mostre sua quantidade de dias.
Autora: Laisa Cristiana Gon�alves Ruiz
Data: 20/11/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

int main(){
	setlocale(LC_ALL,"");
	int mes=0;
	printf("Informe o n�mero do m�s desejado : ");
	scanf("%i", &mes);
	switch (mes) {
		case 1: printf("Janeiro = 31 dias");
		break;
		case 2: printf("Fevereiro = 28 dias");
    	break;
    	case 3: printf("Mar�o = 30 dias");
    	break;
    	case 4: printf("Abril = 31 dias");
    	break;
    	case 5: printf("Maio = 30 dias");
    	break;
    	case 6: printf("Junho = 31 dias");
    	break;
    	case 7: printf("Julho = 30 dias");
    	break;
    	case 8: printf("Agosto = 31 dias");
    	break;
    	case 9: printf("Setembro = 30 dias");
    	break;
    	case 10: printf("Outubro = 31 dias");
    	break;
    	case 11: printf("Novembro = 30 dias");
    	break;
    	case 12: printf("Dezembro 31 dias");
    	break;
		default : printf("Inexistente.");
		break;	
	}
}
