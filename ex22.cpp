/*Programa: Exerc�cio 27
Fun��o: Apresnte os meses do ano de acordo com o c�digo.
Autora: Laisa Cristiana Gon�alves Ruiz
Data: 20/11/2019
*/

	#include <stdio.h>
	#include <locale.h>
	#include <windows.h>

int main(){
	setlocale(LC_ALL,"");
	int cod=0;
    printf("Informe um n�mero de 1 � 12: ");
    scanf("%i",&cod);
    switch (cod) {
    	case 1: printf("Janeiro");
    	break;
    	case 2: printf("Fevereiro");
    	break;
    	case 3: printf("Mar�o");
    	break;
    	case 4: printf("Abril");
    	break;
    	case 5: printf("Maio");
    	break;
    	case 6: printf("Junho");
    	break;
    	case 7: printf("Julho");
    	break;
    	case 8: printf("Agosto");
    	break;
    	case 9: printf("Setembro");
    	break;
    	case 10: printf("Outubro");
    	break;
    	case 11: printf("Novembro");
    	break;
    	case 12: printf("Dezembro");
    	break;
		default : printf("C�digo n�o existente.");
		break;	
	}
}




