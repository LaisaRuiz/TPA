/*Programa: Teatro
* Fun��o: Gerenciar uma sala de espet�culo de teatro
* Autores: Cau� Vicentini Ruiz e Laisa Cristiana Gon�alve Ruiz
* Data: 04/12/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"");
	float v=0 /* Valor do ingresso */, vc=0 /* Valor dado pelo cliente */, vt=0 /* Valor total */, pp=0 /* Porcentagem de preenchimento */;
	int o=0 /* Op��o */, o1=0, o2=0, o7=0 /* Marcador se a op��o j� foi escolhida */, co1=0, co2=0 /* Confirma��o de refazer op��o */, c1=1, c2=1, c3=1, c4=1, c5=1, c7=1 /* Confirmar envio da op��o */, cor=0 /* Corre��o de op��o correta */, e=0 /* Corre��o de sequ�ncia das fun��es */, o33=0 /* Escolha da fun��o 3 */,x=0, y=0 /* Tamanho da sala */, x2=0, y2=0 /* Atribui��o da matriz teatro */, sg=0 /* Sa�da gr�fica */, rx=0, ry=0 /* Reserva */, lr=0 /* Total de lugares reservados */, lv=0 /* Total de lugares vendidos */, iv=0 /* Inteiras vendidas */, mv=0 /* Meias vendidas */, clr=0 /* Corre��o de local reservado */;
	char teatro[500][500];
	/* Introdu��o */
	printf("				   Bem-vindo ao Th�atro Atlas!\n			   Inaugurado em 1895, carregando em seu nome o peso\n			  de sua impec�vel reputa��o, o coossal Atlas � a casa\n			de grandes artistas e palco de maravilhosos espet�culos.\n\n			Suas estruturas ostentam detalhes de diferentes �pocas,\n			  trasnformando o lugar em um santu�rio para todos\n			   os admiradores da arte, assim os guardando como\n			     Atlas guarda o c�u por toda a eternidade.\n\n			    N�s da equipe guardi� do teatro esperamos que\n			   seu incr�vel espet�culo abrigado em nosso espa�o\n			      seja bem recebido pelo p�blico e lhe traga\n			          o retorno desejado. Boa sorte!\n\n");
	/* Desenvolvimento */
	/* Execu��o cont�nua da escolha de op��es (o) at� o programa ser encerrado (op��o 7) */
	while(o7==0){
		/* Exibi��o de fun��es e escolha de op��o (o) */
		printf("			~~~~~~~~~~~~~~~~~~~~~ Teatro ~~~~~~~~~~~~~~~~~~~~~~~       \n");
		printf("			____________________________________________________       \n");
		printf("			|1- Informar o valor do ingresso e tamanho da sala |       \n");
		printf("			|2- Abrir um espet�culo                            |	   \n");
		printf("			|3- Reservar ou cancelar a reserva de um lugar     |	   \n");
		printf("			|4- Vender um lugar (inteira)                      |	   \n");
		printf("			|5- Vender um lugar (meia)                         |	   \n");
		printf("			|6- Verificar mapa do teatro                       |	   \n");
		printf("			|7- Encerrar o espet�culo                          |	   \n");
		printf("			|8- Verificar parciais                             |	   \n");
		printf("			|__________________________________________________|       \n");
		printf("				        Escolha uma op��o:                             \n");
		printf("                                                 ");                                                                                                                                  
		scanf("%i",&o);
		/* Executar a op��o (o) escolhida */
		if(o==1){ /* Escolha de op��o 1 - Informar o valor do ingresso e tamanho da sala */
			while(c1==1){ /* Confirma��o de envio de op��o */
				if(o1==1){ /* Verifica��o se a op��o j� foi escolhida e ser� refeita */
					printf("\n			Esta fun��o j� foi executada anteriormente.\n			Executa-l� novamente apagar� tudo equivalente ao teatro atual.\n			Deseja mesmo executar esta fun��o novamente?\n			0-Sim\n			1-N�o\n			Escolha a op��o desejada para confirmar: "); /* Se a fun��o ser� refeita */
					scanf("%i",&co1);
					if(co1==0){ /* Se ser� feito novamente */
						o1=0;
						o2=0;
					}
					if(co1==1){ /* Se n�o se deve fazer novamente */
						break;
					}		
				}
				printf("\n                        ----------------------------------------------------\n");
				/* Atribui��o de valor do ingresso */
				printf("\n			Informe o valor do ingresso(em reais): ");
				scanf("%f",&v);
				while(v<0){
					printf("\n					  VALOR INV�LIDO.\n			  Os valores devem ser condizentes com a relidade.\n");
					printf("\n			Informe o valor do ingresso(em reais): ");
					scanf("%f",&v);
				}
				printf("\n                        ----------------------------------------------------\n");
				/* Atribui��o de tamanho da sala */
				printf("\n			Temos suporte para no m�ximo 500 pessoas.\n");
				while(cor==0){ /* Enquanto a op��o n�o estiver correta */
					printf("\n			Informe o tamanho da sala:\n"); 
					printf("			Informe a quantidade de fileiras: "); 
					scanf("%i",&x);
					while(x<=0){ /* Verifica��o de erro de valor irreal */
						printf("\n					  VALOR INV�LIDO.\n			  Os valores devem ser condizentes com a relidade.\n");
						printf("\n			Informe a quantidade de fileiras: "); 
						scanf("%i",&x);
					}
					printf("			Informe a quantidade de colunas: "); 
					scanf("%i",&y);
					while(y<=0){ /* Verifica��o de erro de valor irreal */
						printf("\n					  VALOR INV�LIDO.\n			  Os valores devem ser condizentes com a relidade.\n");
						printf("\n			Informe a quantidade de colunas: "); 
						scanf("%i",&y);
					}
					if(x*y<=500 and x*y>0){ /* Corre��o de op��o correta */
						cor=1;
					}
					else if(x*y>500){ /* Verifica��o de erro de suporte m�ximo */ 
						printf("\n					  VALOR INV�LIDO.\n		   	    Temos suporte para NO M�XIMO 500 PESSOAS.\n");
					}
				}
				cor=0; /* Zerando para poder executar posteriormente */
				/* Confirma��o de envio */
				printf("\n                        ----------------------------------------------------\n"); 
				printf("\n			Verifique se todos os valores enviados est�o corretos.\n			Confirmar envio?\n			0-Sim\n			1-N�o\n			Infome a op��o desejada: "); /* Confirmar envio da op��o */
				scanf("%i",&c1);
				while(c1!=0 and c1!=1){ /* Corre��o de op��o inv�lida */
					printf("\n					  VALOR INV�LIDO.\n			      O valor deve ser uma das op��es acima.\n");
					printf("\n			Informe a op��o desejada: "); 
					scanf("%i",&c1);
				}
				if(c1==1){ /* Cancelar fun��o */
					break; 
				}
			}
			if(c1==0){
				o1=1; /* Marcando que op��o j� foi escolhida */
			}
			c1=1; /* Zerando para poder executar posteriormente */	
		}
		else if(o==2){ /* Escolha de op��o 2 - Abrir um espet�culo */
			if(o1==0){
				printf("\n					  VALOR INV�LIDO.\n			A fun��o abrir espet�culo(2) s� estar� dispon�vel ap�s\n					a execu��o da fun��o 1.\n\n");
				Sleep(2500);
				system("cls");
				continue;
			}
			while(c2==1){
				/* Verifica��o se a op��o j� foi escolhida e ser� refeita */
				if(o2==1){ 
					printf("\n			Esta fun��o j� foi executada anteriormente.\n			Executa-l� novamente ir� zerar todos os lugares.\n			Deseja mesmo executar esta fun��o novamente?\n			0-Sim\n			1-N�o\n			Escolha a op��o desejada para confirmar: "); /* Se a fun��o ser� refeita */
					scanf("%i",&co2);
					if(co2==0){ /* Se ser� feito novamente */
						o2=0;
						lr=0;
						lv=0;
						iv=0;
						mv=0;
						vt=0;
						
					}
					if(co2==1){ /* Se n�o se deve fazer novamente */
						break;
					}		
				}
				for (x2 = 0; x2 < x; x2++){ /* Atribui��o de valores � matriz */
	   				for (y2 = 0; y2 < y; y2++){
	       				teatro[x2][y2] = '-';
	    			}
	    		}
				printf("\n                        ----------------------------------------------------\n");
			    printf("\n			Espet�culo aberto!\n			Agora as fun��es de reserva(3), venda(4 e 5),\n			verifica��o de mapa(6) e verifica��o de parciais(8)\n			est�o dispon�veis!\n"); /* Mensagem de abertura */
			    /* Confirma��o de envio da op��o */
				printf("\n                        ----------------------------------------------------\n");
				printf("\n			Confirmar envio?\n			0-Sim\n			1-N�o\n			Infome a op��o desejada: "); /* Confirmar envio da op��o */
				scanf("%i",&c2);
				while(c2!=0 and c2!=1){ /* Corre��o de op��o inv�lida */
						printf("\n					  VALOR INV�LIDO.\n			      O valor deve ser uma das op��es acima.\n");
						printf("\n			Informe a op��o desejada: "); 
						scanf("%i",&c2);
				}
				if(c2==1){ /* Cancelar fun��o */
					break;
				}
			}
			if(c2==0){
				o2=1; /* Marcando que op��o j� foi escolhida */
			}
			c2=1; /* Zerando para poder executar posteriormente */
		}
		else if(o==3){ /* Escolha de op��o 3 - Reservar ou cancelar a reserva de um lugar */
			/* Corre��o da sequ�ncia de fun��es */
			if(o1==0){ 
				printf("\n					  VALOR INV�LIDO.\n			As fun��es de reserva(3), venda(4 e 5), verifica��o\n			de mapa(6), fechar espet�culo(7) e verifica��o de\n			parciais(8) s� estar�o dispon�veis ap�s a execu��o das\n			fun��es 1 e 2.\n\n");
				Sleep(2500);
				system("cls");
				continue;
			}
			else if(o2==0){
				printf("\n					  VALOR INV�LIDO.\n			As fun��es de reserva(3), venda(4 e 5), verifica��o\n			de mapa(6), fechar espet�culo(7) e verifica��o de\n			parciais(8) s� estar�o dispon�veis ap�s a execu��o das\n			fun��es 1 e 2.\n\n");
				Sleep(2500);
				system("cls");
				continue;
			}
			printf("\n			Para ser realizada uma reserva, 60 porcento do valor\n			do ingresso deve ser pago.\n");
			while(c3==1){
				printf("\n                        ----------------------------------------------------\n"); 
				/* Escolha */
				printf("\n			Voc� deseja reservar um lugar ou cancelar uma reserva?\n			1-Reservar\n			2-Cancelar\n			Informe a op��o desejada: ");
				scanf("%i",&o33);
				while(o33!=1 and o33!=2){
					printf("\n					  VALOR INV�LIDO.\n			      O valor deve ser uma das op��es acima.\n");
					printf("\n			Informe a op��o desejada: "); 
					scanf("%i",&o33);
				}
				printf("\n                        ----------------------------------------------------\n"); 
				/* Reserva */
				if(o33==1){
					printf("\n			O valor a ser pago por esta reserva � de %.2f.",v*(0.6));
					printf("\n			Informe o valor recebido do cliente: ");
					scanf("%f",&vc);
					printf("\n                        ----------------------------------------------------\n"); 
					if(vc==(v*0.6)){
						printf("\n			Informe a posi��o do local � ser reservado:\n"); /* Coordenada da cadeira */
						printf("\n			Informe o n�mero da fileira: ");
						scanf("%i",&rx);
						while(rx>x or rx<0){
							printf("\n					  VALOR INV�LIDO.\n			      O valor deve ser condizente com a realidade.\n");
							printf("\n			Informe o n�mero da fileira: "); 
							scanf("%i",&rx);
						}
						printf("\n			Informe o n�mero da coluna: ");
						scanf("%i",&ry);
						while(ry>y or ry<0){
							printf("\n					  VALOR INV�LIDO.\n			      O valor deve ser condizente com a realidade.\n");
							printf("\n			Informe o n�mero da coluna: "); 
							scanf("%i",&ry);
						}
						if(teatro[rx-1][ry-1]=='-'){
							teatro[rx-1][ry-1]='R';
							lr++;
							vt=vt+vc;
						}
						else{
							printf("\n					  VALOR INV�LIDO.\n			      		Lugar indispon�vel.\n");
							Sleep(500);
							break;
						}
					}
					else{
						printf("\n					  VALOR INV�LIDO.\n			      	  Valor n�o correspondente.\n");
						Sleep(500);
						break;
					}
				}
				/* Cancelamento */
				else if(o33==2){
					printf("\n			Informe a posi��o do local � ser cancelado:\n"); /* Coordenada da cadeira */
						printf("\n			Informe o n�mero da fileira: ");
						scanf("%i",&rx);
						while(rx>x or rx<0){
							printf("\n					  VALOR INV�LIDO.\n			      O valor deve ser condizente com a realidade.\n");
							printf("\n			Informe o n�mero da fileira: "); 
							scanf("%i",&rx);
						}
						printf("\n			Informe o n�mero da coluna: ");
						scanf("%i",&ry);
						while(ry>y or ry<0){
							printf("\n					  VALOR INV�LIDO.\n			      O valor deve ser condizente com a realidade.\n");
							printf("\n			Informe o n�mero da coluna: "); 
							scanf("%i",&ry);
						}
						if(teatro[rx-1][ry-1]=='R'){
							teatro[rx-1][ry-1]='-';
							lr--;
							vt=vt-vc;
						}
						else{
							printf("\n					  VALOR INV�LIDO.\n			      		Lugar n�o reservado.\n");
							break;
						}
				}
				/* Confirma��o de envio de op��o */
				printf("\n                        ----------------------------------------------------\n"); 
				printf("\n			Verifique se todos os valores enviados est�o corretos.\n			Confirmar envio?\n			0-Sim\n			1-N�o\n			Infome a op��o desejada: "); /* Confirmar envio da op��o */
				scanf("%i",&c3);
				while(c3!=0 and c3!=1){ /* Corre��o de op��o inv�lida */
					printf("\n					  VALOR INV�LIDO.\n			      O valor deve ser uma das op��es acima.\n");
					printf("\n			Informe a op��o desejada: "); 
					scanf("%i",&c3);
				}
				if(c3==1){ /* Cancelar fun��o */
					teatro[rx-1][ry-1]='-';
					lr--;
					vt=vt-vc;
					Sleep(500);
					break; 
				}
			}
			c3=1; /* Zerando para poder executar posteriormente */
		}
		else if(o==4){ /* Escolha de op��o 4 - Vender um lugar (inteira) */
			/* Corre��o da sequ�ncia de fun��es */
			if(o1==0){
				printf("\n					  VALOR INV�LIDO.\n			As fun��es de reserva(3), venda(4 e 5), verifica��o\n			de mapa(6), fechar espet�culo(7) e verifica��o de\n			parciais(8) s� estar�o dispon�veis ap�s a execu��o das\n			fun��es 1 e 2.\n\n");
				Sleep(2500);
				system("cls");
				continue;
			}
			else if(o2==0){
				printf("\n					  VALOR INV�LIDO.\n			As fun��es de reserva(3), venda(4 e 5), verifica��o\n			de mapa(6), fechar espet�culo(7) e verifica��o de\n			parciais(8) s� estar�o dispon�veis ap�s a execu��o das\n			fun��es 1 e 2.\n\n");
				Sleep(2500);
				system("cls");
				continue;
			}
			while(c4==1){
				printf("\n			O local � ser comprado estava reservado anteriormente?\n			1-Sim\n			2-N�o\n			Informe a op��o: ");
				scanf("%i",&clr);
				while(clr!=1 and clr!=2){ /* Corre��o de op��o inv�lida */
					printf("\n					  VALOR INV�LIDO.\n			      O valor deve ser uma das op��es acima.\n");
					printf("\n			Informe a op��o desejada: "); 
					scanf("%i",&clr);
				}
				if(clr==1){
					printf("\n			O valor a ser pago pela compra do lugar � de %.2f.",v*(0.4));
					printf("\n			Informe o valor recebido do cliente: ");
					scanf("%f",&vc);
					printf("\n                        ----------------------------------------------------\n"); 
					if(vc==(v*0.4)){
						printf("\n			Informe a posi��o do local � ser comprado:\n"); /* Coordenada da cadeira */
						printf("\n			Informe o n�mero da fileira: ");
						scanf("%i",&rx);
						while(rx>x or rx<0){
							printf("\n					  VALOR INV�LIDO.\n			      O valor deve ser condizente com a realidade.\n");
							printf("\n			Informe o n�mero da fileira: "); 
							scanf("%i",&rx);	
						}
						printf("\n			Informe o n�mero da coluna: ");
						scanf("%i",&ry);
						while(ry>y or ry<0){
							printf("\n					  VALOR INV�LIDO.\n			      O valor deve ser condizente com a realidade.\n");
							printf("\n			Informe o n�mero da coluna: "); 
							scanf("%i",&ry);
						}
						if(teatro[rx-1][ry-1]=='R'){
							teatro[rx-1][ry-1]='V';
							lr--;
							lv++;
							iv++;
							vt=vt+vc;
						}
						else{
							printf("\n					  VALOR INV�LIDO.\n			      		Lugar n�o estava reservado.\n");
							Sleep(500);
							break;
						}
					}
					else{
						printf("\n					  VALOR INV�LIDO.\n			      		Valor n�o correspondente.\n");
						Sleep(500);
						break;
					}
				}
				else{
					printf("\n			O valor a ser pago pela compra do lugar � de %.2f.",v);
					printf("\n			Informe o valor recebido do cliente: ");
					scanf("%f",&vc);
					printf("\n                        ----------------------------------------------------\n"); 
					if(vc==v){
						printf("\n			Informe a posi��o do local � ser comprado:\n"); /* Coordenada da cadeira */
						printf("\n			Informe o n�mero da fileira: ");
						scanf("%i",&rx);
						while(rx>x or rx<0){
							printf("\n					  VALOR INV�LIDO.\n			      O valor deve ser condizente com a realidade.\n");
							printf("\n			Informe o n�mero da fileira: "); 
							scanf("%i",&rx);	
						}
						printf("\n			Informe o n�mero da coluna: ");
						scanf("%i",&ry);
						while(ry>y or ry<0){
							printf("\n					  VALOR INV�LIDO.\n			      O valor deve ser condizente com a realidade.\n");
							printf("\n			Informe o n�mero da coluna: "); 
							scanf("%i",&ry);
						}
						if(teatro[rx-1][ry-1]=='-'){
							teatro[rx-1][ry-1]='V';
							lv++;
							iv++;
							vt=vt+vc;
						}
						else{
							printf("\n					  VALOR INV�LIDO.\n			      		Lugar indispon�vel.\n");
							Sleep(500);
							break;
						}
					}
					else{
						printf("\n					  VALOR INV�LIDO.\n			      		Valor n�o correspondente.\n");
						Sleep(500);
						break;
					}
				}
				/* Confirma��o de envio de op��o */
				printf("\n                        ----------------------------------------------------\n"); 
				printf("\n			Verifique se todos os valores enviados est�o corretos.\n			Confirmar envio?\n			0-Sim\n			1-N�o\n			Infome a op��o desejada: "); /* Confirmar envio da op��o */
				scanf("%i",&c4);
				while(c4!=0 and c4!=1){ /* Corre��o de op��o inv�lida */
					printf("\n					  VALOR INV�LIDO.\n			      O valor deve ser uma das op��es acima.\n");
					printf("\n			Informe a op��o desejada: "); 
					scanf("%i",&c4);
				}
				if(c4==1){ /* Cancelar fun��o */
					break; 
				}
			}
			c4=1; /* Zerando para poder executar posteriormente */
		}
		else if(o==5){ /* Escolha de op��o 5 - Vender um lugar (meia) */
			/* Corre��o da sequ�ncia de fun��es */
			if(o1==0){
				printf("\n					  VALOR INV�LIDO.\n			As fun��es de reserva(3), venda(4 e 5), verifica��o\n			de mapa(6), fechar espet�culo(7) e verifica��o de\n			parciais(8) s� estar�o dispon�veis ap�s a execu��o das\n			fun��es 1 e 2.\n\n");
				Sleep(2500);
				system("cls");
				continue;
			}
			else if(o2==0){
				printf("\n					  VALOR INV�LIDO.\n			As fun��es de reserva(3), venda(4 e 5), verifica��o\n			de mapa(6), fechar espet�culo(7) e verifica��o de\n			parciais(8) s� estar�o dispon�veis ap�s a execu��o das\n			fun��es 1 e 2.\n\n");
				Sleep(2500);
				system("cls");
				continue;
			}
			while(c5==1){
				printf("\n			O local � ser comprado estava reservado anteriormente?\n			1-Sim\n			2-N�o\n			Informe a op��o: ");
				scanf("%i",&clr);
				while(clr!=1 and clr!=2){ /* Corre��o de op��o inv�lida */
					printf("\n					  VALOR INV�LIDO.\n			      O valor deve ser uma das op��es acima.\n");
					printf("\n			Informe a op��o desejada: "); 
					scanf("%i",&clr);
				}
				if(clr==1){
					printf("\n			O valor a ser pago pela compra do lugar � de %.2f.",((v/2)*(0.4)));
					printf("\n			Informe o valor recebido do cliente: ");
					scanf("%f",&vc);
					printf("\n                        ----------------------------------------------------\n"); 
					if(vc==((v/2)*0.4)){
						printf("\n			Informe a posi��o do local � ser comprado:\n"); /* Coordenada da cadeira */
						printf("\n			Informe o n�mero da fileira: ");
						scanf("%i",&rx);
						while(rx>x or rx<0){
							printf("\n					  VALOR INV�LIDO.\n			      O valor deve ser condizente com a realidade.\n");
							printf("\n			Informe o n�mero da fileira: "); 
							scanf("%i",&rx);	
						}
						printf("\n			Informe o n�mero da coluna: ");
						scanf("%i",&ry);
						while(ry>y or ry<0){
							printf("\n					  VALOR INV�LIDO.\n			      O valor deve ser condizente com a realidade.\n");
							printf("\n			Informe o n�mero da coluna: "); 
							scanf("%i",&ry);
						}
						if(teatro[rx-1][ry-1]=='R'){
							teatro[rx-1][ry-1]='V';
							lr--;
							lv++;
							mv++;
							vt=vt+vc;
						}
						else{
							printf("\n					  VALOR INV�LIDO.\n			      		Lugar n�o estava reservado.\n");
							Sleep(500);
							break;
						}
					}
					else{
						printf("\n					  VALOR INV�LIDO.\n			      		Valor n�o correspondente.\n");
						Sleep(500);
						break;
					}
				}
				else{
					printf("\n			O valor a ser pago pela compra do lugar � de %.2f.",(v/2));
					printf("\n			Informe o valor recebido do cliente: ");
					scanf("%f",&vc);
					printf("\n                        ----------------------------------------------------\n"); 
					if(vc==(v/2)){
						printf("\n			Informe a posi��o do local � ser comprado:\n"); /* Coordenada da cadeira */
						printf("\n			Informe o n�mero da fileira: ");
						scanf("%i",&rx);
						while(rx>x or rx<0){
							printf("\n					  VALOR INV�LIDO.\n			      O valor deve ser condizente com a realidade.\n");
							printf("\n			Informe o n�mero da fileira: "); 
							scanf("%i",&rx);	
						}
						printf("\n			Informe o n�mero da coluna: ");
						scanf("%i",&ry);
						while(ry>y or ry<0){
							printf("\n					  VALOR INV�LIDO.\n			      O valor deve ser condizente com a realidade.\n");
							printf("\n			Informe o n�mero da coluna: "); 
							scanf("%i",&ry);
						}
						if(teatro[rx-1][ry-1]=='-'){
							teatro[rx-1][ry-1]='V';
							lv++;
							mv++;
							vt=vt+vc;
						}
						else{
							printf("\n					  VALOR INV�LIDO.\n			      		Lugar indispon�vel.\n");
							Sleep(500);
							break;
						}
					}
					else{
						printf("\n					  VALOR INV�LIDO.\n			      		Valor n�o correspondente.\n");
						Sleep(500);
						break;
					}
				}
				/* Confirma��o de envio de op��o */
				printf("\n                        ----------------------------------------------------\n"); 
				printf("\n			Verifique se todos os valores enviados est�o corretos.\n			Confirmar envio?\n			0-Sim\n			1-N�o\n			Infome a op��o desejada: "); /* Confirmar envio da op��o */
				scanf("%i",&c5);
				while(c5!=0 and c5!=1){ /* Corre��o de op��o inv�lida */
					printf("\n					  VALOR INV�LIDO.\n			      O valor deve ser uma das op��es acima.\n");
					printf("\n			Informe a op��o desejada: "); 
					scanf("%i",&c5);
				}
				if(c5==1){ /* Cancelar fun��o */
					break; 
				}
			}
			c5=1; /* Zerando para poder executar posteriormente */
			}
		else if(o==6){ /* Escolha de op��o 6 - Verificar mapa do teatro */
			/* Corre��o da sequ�ncia de fun��es */
			if(o1==0){
				printf("\n					  VALOR INV�LIDO.\n			As fun��es de reserva(3), venda(4 e 5), verifica��o\n			de mapa(6), fechar espet�culo(7) e verifica��o de\n			parciais(8) s� estar�o dispon�veis ap�s a execu��o das\n			fun��es 1 e 2.\n\n");
				Sleep(2500);
				system("cls");
				continue;
			}
			else if(o2==0){
				printf("\n					  VALOR INV�LIDO.\n			As fun��es de reserva(3), venda(4 e 5), verifica��o\n			de mapa(6), fechar espet�culo(7) e verifica��o de\n			parciais(8) s� estar�o dispon�veis ap�s a execu��o das\n			fun��es 1 e 2.\n\n");
				Sleep(2500);
				system("cls");
				continue;
			}
			/* Sa�da gr�fica */				
	    	for (x2 = 0; x2 < x; x2++){
				for (y2 = 0; y2 < y; y2++){
					printf(" |%c|",teatro[x2][y2]);
         		} 
         		printf("\n");
    		}
			printf("\n			Aperte 1 para continuar: "); /* Sair da sa�da gr�fica */
			scanf("%i",&sg);	 
			while(sg!=1){
				printf("\n			Aperte 1 para continuar: ");
				scanf("%i",&sg);
			}
			if(sg==1){
				system("cls");
				continue;
			}
		}
		else if(o==7){ /* Escolha de op��o 7 - Encerrar o espet�culo */
			/* Corre��o da sequ�ncia de fun��es */
			if(o1==0){
				printf("\n					  VALOR INV�LIDO.\n			As fun��es de reserva(3), venda(4 e 5), verifica��o\n			de mapa(6), fechar espet�culo(7) e verifica��o de\n			parciais(8) s� estar�o dispon�veis ap�s a execu��o das\n			fun��es 1 e 2.\n\n");
				Sleep(2500);
				system("cls");
				continue;
			}
			else if(o2==0){
				printf("\n					  VALOR INV�LIDO.\n			As fun��es de reserva(3), venda(4 e 5), verifica��o\n			de mapa(6), fechar espet�culo(7) e verifica��o de\n			parciais(8) s� estar�o dispon�veis ap�s a execu��o das\n			fun��es 1 e 2.\n\n");
				Sleep(2500);
				system("cls");
				continue;
			}
			printf("\n			Deseja mesmo encerrar o espet�culo?\n			0-Sim\n			1-N�o\n			Infome a op��o desejada: "); 
			scanf("%i",&c7);
			while(c7!=0 and c7!=1){ /* Corre��o de op��o inv�lida */
				printf("\n					  VALOR INV�LIDO.\n			      O valor deve ser uma das op��es acima.\n");
				printf("\n			Informe a op��o desejada: "); 
				scanf("%i",&c7);
			}
			if((lv+lr)*100/(x*y)>=60){
			/* Confirma��o de envio de op��o */
				printf("\n                        ----------------------------------------------------\n"); 
				printf("\n			Verifique se todos os valores enviados est�o corretos.\n			Confirmar envio?\n			0-Sim\n			1-N�o\n			Infome a op��o desejada: "); /* Confirmar envio da op��o */
				scanf("%i",&c7);
				while(c7!=0 and c7!=1){ /* Corre��o de op��o inv�lida */
					printf("\n					  VALOR INV�LIDO.\n			      O valor deve ser uma das op��es acima.\n");
					printf("\n			Informe a op��o desejada: "); 
					scanf("%i",&c7);
				}
				o7=1;
				if(c7==1){ /* Cancelar fun��o */
					break; 
				}	
			}
			else{
				printf("\n					  VALOR INV�LIDO.\n			O espet�culo ainda n�o cumpriu a cota m�nima de 60 porcento e portanto n�o pode ser encerrado.");
				Sleep(2500);
				system("cls");
				continue;
			}
			c7=0;
		}
		else if(o==8){ /* Escolha de op��o 8 - Verificar parciais */
			/* Corre��o da sequ�ncia de fun��es */
			if(o1==0){
				printf("\n					  VALOR INV�LIDO.\n			As fun��es de reserva(3), venda(4 e 5), verifica��o\n			de mapa(6), fechar espet�culo(7) e verifica��o de\n			parciais(8) s� estar�o dispon�veis ap�s a execu��o das\n			fun��es 1 e 2.\n\n");
				Sleep(2500);
				system("cls");
				continue;
			}
			else if(o2==0){
				printf("\n					  VALOR INV�LIDO.\n			As fun��es de reserva(3), venda(4 e 5), verifica��o\n			de mapa(6), fechar espet�culo(7) e verifica��o de\n			parciais(8) s� estar�o dispon�veis ap�s a execu��o das\n			fun��es 1 e 2.\n\n");
				Sleep(2500);
				system("cls");
				continue;
			}
			printf("\n                        ----------------------------------------------------\n"); 
			printf("\n			Valor do ingresso: %.2f",v);
			printf("\n			Tamanho da sala: %i fileiras %i colunas",x,y);
			printf("\n                        ----------------------------------------------------\n"); 
			printf("\n			Total de lugares: %i",(x*y));
			printf("\n			Total de lugares reservados: %i",lr);
			printf("\n			Total de ugares vendidos: %i",lv);
			printf("\n			Inteiras vendidas: %i",iv);
			printf("\n			Meias vendidas: %i",mv);
			printf("\n                        ----------------------------------------------------\n"); 
			printf("\n 			Total arrecadado: %.2f",vt);
			printf("\n                        ----------------------------------------------------\n"); 
			pp=(lv+lr)*100/(x*y);
			printf("\n			Porcentagem de preenchimento da sala: %.2f",pp);
			printf("\n			Porcentagem restante para 60: %.2f",60-pp);
			printf("\n			Porcentagem restante para 100: %.2f",100-pp);
			printf("\n			Aperte 1 para continuar: "); /* Sair da sa�da gr�fica */
			scanf("%i",&sg);	 
			while(sg!=1){
				printf("\n			Aperte 1 para continuar: ");
				scanf("%i",&sg);
			}
			if(sg==1){
				system("cls");
				continue;
			}
		}
		else{
			printf("\n					  VALOR INV�LIDO.\n			      O valor deve ser uma das op��es acima.\n");
			Sleep(1000);                                                                                                       
		}
		/* Limpar a tela */
		printf("\n                        ----------------------------------------------------");
		Sleep(500);
		system("cls");
	}
	/* Conclus�o */
	printf("\n			Espet�culo encerrado!");
	printf("\n			Parab�ns, o espet�culo foi um sucesso!");
	printf("\n                        ----------------------------------------------------\n"); 
	printf("\n			Valor do ingresso: %.2f",v);
	printf("\n			Tamanho da sala: %i fileiras %i colunas",x,y);
	printf("\n                        ----------------------------------------------------\n"); 
	printf("\n			Total de lugares: %i",(x*y));
	printf("\n			Total de lugares reservados: %i",lr);
	printf("\n			Total de ugares vendidos: %i",lv);
	printf("\n			Inteiras vendidas: %i",iv);
	printf("\n			Meias vendidas: %i",mv);
	printf("\n                        ----------------------------------------------------\n"); 
	printf("\n 			Total arrecadado: %.2f",vt);
	printf("\n                        ----------------------------------------------------\n"); 
	pp=(lv+lr)*100/(x*y);
	printf("\n			Porcentagem de preenchimento da sala: %.2f",pp);
	printf("\n			Volte sempre a trabalhar conosco!");
	system("pause");
}
