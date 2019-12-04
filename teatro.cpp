/*Programa: Teatro
* Função: Gerenciar uma sala de espetáculo de teatro
* Autores: Cauê Vicentini Ruiz e Laisa Cristiana Gonçalve Ruiz
* Data: 04/12/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"");
	float v=0 /* Valor do ingresso */, vc=0 /* Valor dado pelo cliente */, vt=0 /* Valor total */, pp=0 /* Porcentagem de preenchimento */;
	int o=0 /* Opção */, o1=0, o2=0, o7=0 /* Marcador se a opção já foi escolhida */, co1=0, co2=0 /* Confirmação de refazer opção */, c1=1, c2=1, c3=1, c4=1, c5=1, c7=1 /* Confirmar envio da opção */, cor=0 /* Correção de opção correta */, e=0 /* Correção de sequência das funções */, o33=0 /* Escolha da função 3 */,x=0, y=0 /* Tamanho da sala */, x2=0, y2=0 /* Atribuição da matriz teatro */, sg=0 /* Saída gráfica */, rx=0, ry=0 /* Reserva */, lr=0 /* Total de lugares reservados */, lv=0 /* Total de lugares vendidos */, iv=0 /* Inteiras vendidas */, mv=0 /* Meias vendidas */, clr=0 /* Correção de local reservado */;
	char teatro[500][500];
	/* Introdução */
	printf("				   Bem-vindo ao Théatro Atlas!\n			   Inaugurado em 1895, carregando em seu nome o peso\n			  de sua impecável reputação, o coossal Atlas é a casa\n			de grandes artistas e palco de maravilhosos espetáculos.\n\n			Suas estruturas ostentam detalhes de diferentes épocas,\n			  trasnformando o lugar em um santuário para todos\n			   os admiradores da arte, assim os guardando como\n			     Atlas guarda o céu por toda a eternidade.\n\n			    Nós da equipe guardiã do teatro esperamos que\n			   seu incrível espetáculo abrigado em nosso espaço\n			      seja bem recebido pelo público e lhe traga\n			          o retorno desejado. Boa sorte!\n\n");
	/* Desenvolvimento */
	/* Execução contínua da escolha de opções (o) até o programa ser encerrado (opção 7) */
	while(o7==0){
		/* Exibição de funções e escolha de opção (o) */
		printf("			~~~~~~~~~~~~~~~~~~~~~ Teatro ~~~~~~~~~~~~~~~~~~~~~~~       \n");
		printf("			____________________________________________________       \n");
		printf("			|1- Informar o valor do ingresso e tamanho da sala |       \n");
		printf("			|2- Abrir um espetáculo                            |	   \n");
		printf("			|3- Reservar ou cancelar a reserva de um lugar     |	   \n");
		printf("			|4- Vender um lugar (inteira)                      |	   \n");
		printf("			|5- Vender um lugar (meia)                         |	   \n");
		printf("			|6- Verificar mapa do teatro                       |	   \n");
		printf("			|7- Encerrar o espetáculo                          |	   \n");
		printf("			|8- Verificar parciais                             |	   \n");
		printf("			|__________________________________________________|       \n");
		printf("				        Escolha uma opção:                             \n");
		printf("                                                 ");                                                                                                                                  
		scanf("%i",&o);
		/* Executar a opção (o) escolhida */
		if(o==1){ /* Escolha de opção 1 - Informar o valor do ingresso e tamanho da sala */
			while(c1==1){ /* Confirmação de envio de opção */
				if(o1==1){ /* Verificação se a opção já foi escolhida e será refeita */
					printf("\n			Esta função já foi executada anteriormente.\n			Executa-lá novamente apagará tudo equivalente ao teatro atual.\n			Deseja mesmo executar esta função novamente?\n			0-Sim\n			1-Não\n			Escolha a opção desejada para confirmar: "); /* Se a função será refeita */
					scanf("%i",&co1);
					if(co1==0){ /* Se será feito novamente */
						o1=0;
						o2=0;
					}
					if(co1==1){ /* Se não se deve fazer novamente */
						break;
					}		
				}
				printf("\n                        ----------------------------------------------------\n");
				/* Atribuição de valor do ingresso */
				printf("\n			Informe o valor do ingresso(em reais): ");
				scanf("%f",&v);
				while(v<0){
					printf("\n					  VALOR INVÁLIDO.\n			  Os valores devem ser condizentes com a relidade.\n");
					printf("\n			Informe o valor do ingresso(em reais): ");
					scanf("%f",&v);
				}
				printf("\n                        ----------------------------------------------------\n");
				/* Atribuição de tamanho da sala */
				printf("\n			Temos suporte para no máximo 500 pessoas.\n");
				while(cor==0){ /* Enquanto a opção não estiver correta */
					printf("\n			Informe o tamanho da sala:\n"); 
					printf("			Informe a quantidade de fileiras: "); 
					scanf("%i",&x);
					while(x<=0){ /* Verificação de erro de valor irreal */
						printf("\n					  VALOR INVÁLIDO.\n			  Os valores devem ser condizentes com a relidade.\n");
						printf("\n			Informe a quantidade de fileiras: "); 
						scanf("%i",&x);
					}
					printf("			Informe a quantidade de colunas: "); 
					scanf("%i",&y);
					while(y<=0){ /* Verificação de erro de valor irreal */
						printf("\n					  VALOR INVÁLIDO.\n			  Os valores devem ser condizentes com a relidade.\n");
						printf("\n			Informe a quantidade de colunas: "); 
						scanf("%i",&y);
					}
					if(x*y<=500 and x*y>0){ /* Correção de opção correta */
						cor=1;
					}
					else if(x*y>500){ /* Verificação de erro de suporte máximo */ 
						printf("\n					  VALOR INVÁLIDO.\n		   	    Temos suporte para NO MÁXIMO 500 PESSOAS.\n");
					}
				}
				cor=0; /* Zerando para poder executar posteriormente */
				/* Confirmação de envio */
				printf("\n                        ----------------------------------------------------\n"); 
				printf("\n			Verifique se todos os valores enviados estão corretos.\n			Confirmar envio?\n			0-Sim\n			1-Não\n			Infome a opção desejada: "); /* Confirmar envio da opção */
				scanf("%i",&c1);
				while(c1!=0 and c1!=1){ /* Correção de opção inválida */
					printf("\n					  VALOR INVÁLIDO.\n			      O valor deve ser uma das opções acima.\n");
					printf("\n			Informe a opção desejada: "); 
					scanf("%i",&c1);
				}
				if(c1==1){ /* Cancelar função */
					break; 
				}
			}
			if(c1==0){
				o1=1; /* Marcando que opção já foi escolhida */
			}
			c1=1; /* Zerando para poder executar posteriormente */	
		}
		else if(o==2){ /* Escolha de opção 2 - Abrir um espetáculo */
			if(o1==0){
				printf("\n					  VALOR INVÁLIDO.\n			A função abrir espetáculo(2) só estará disponível após\n					a execução da função 1.\n\n");
				Sleep(2500);
				system("cls");
				continue;
			}
			while(c2==1){
				/* Verificação se a opção já foi escolhida e será refeita */
				if(o2==1){ 
					printf("\n			Esta função já foi executada anteriormente.\n			Executa-lá novamente irá zerar todos os lugares.\n			Deseja mesmo executar esta função novamente?\n			0-Sim\n			1-Não\n			Escolha a opção desejada para confirmar: "); /* Se a função será refeita */
					scanf("%i",&co2);
					if(co2==0){ /* Se será feito novamente */
						o2=0;
						lr=0;
						lv=0;
						iv=0;
						mv=0;
						vt=0;
						
					}
					if(co2==1){ /* Se não se deve fazer novamente */
						break;
					}		
				}
				for (x2 = 0; x2 < x; x2++){ /* Atribuição de valores à matriz */
	   				for (y2 = 0; y2 < y; y2++){
	       				teatro[x2][y2] = '-';
	    			}
	    		}
				printf("\n                        ----------------------------------------------------\n");
			    printf("\n			Espetáculo aberto!\n			Agora as funções de reserva(3), venda(4 e 5),\n			verificação de mapa(6) e verificação de parciais(8)\n			estão disponíveis!\n"); /* Mensagem de abertura */
			    /* Confirmação de envio da opção */
				printf("\n                        ----------------------------------------------------\n");
				printf("\n			Confirmar envio?\n			0-Sim\n			1-Não\n			Infome a opção desejada: "); /* Confirmar envio da opção */
				scanf("%i",&c2);
				while(c2!=0 and c2!=1){ /* Correção de opção inválida */
						printf("\n					  VALOR INVÁLIDO.\n			      O valor deve ser uma das opções acima.\n");
						printf("\n			Informe a opção desejada: "); 
						scanf("%i",&c2);
				}
				if(c2==1){ /* Cancelar função */
					break;
				}
			}
			if(c2==0){
				o2=1; /* Marcando que opção já foi escolhida */
			}
			c2=1; /* Zerando para poder executar posteriormente */
		}
		else if(o==3){ /* Escolha de opção 3 - Reservar ou cancelar a reserva de um lugar */
			/* Correção da sequência de funções */
			if(o1==0){ 
				printf("\n					  VALOR INVÁLIDO.\n			As funções de reserva(3), venda(4 e 5), verificação\n			de mapa(6), fechar espetáculo(7) e verificação de\n			parciais(8) só estarão disponíveis após a execução das\n			funções 1 e 2.\n\n");
				Sleep(2500);
				system("cls");
				continue;
			}
			else if(o2==0){
				printf("\n					  VALOR INVÁLIDO.\n			As funções de reserva(3), venda(4 e 5), verificação\n			de mapa(6), fechar espetáculo(7) e verificação de\n			parciais(8) só estarão disponíveis após a execução das\n			funções 1 e 2.\n\n");
				Sleep(2500);
				system("cls");
				continue;
			}
			printf("\n			Para ser realizada uma reserva, 60 porcento do valor\n			do ingresso deve ser pago.\n");
			while(c3==1){
				printf("\n                        ----------------------------------------------------\n"); 
				/* Escolha */
				printf("\n			Você deseja reservar um lugar ou cancelar uma reserva?\n			1-Reservar\n			2-Cancelar\n			Informe a opção desejada: ");
				scanf("%i",&o33);
				while(o33!=1 and o33!=2){
					printf("\n					  VALOR INVÁLIDO.\n			      O valor deve ser uma das opções acima.\n");
					printf("\n			Informe a opção desejada: "); 
					scanf("%i",&o33);
				}
				printf("\n                        ----------------------------------------------------\n"); 
				/* Reserva */
				if(o33==1){
					printf("\n			O valor a ser pago por esta reserva é de %.2f.",v*(0.6));
					printf("\n			Informe o valor recebido do cliente: ");
					scanf("%f",&vc);
					printf("\n                        ----------------------------------------------------\n"); 
					if(vc==(v*0.6)){
						printf("\n			Informe a posição do local à ser reservado:\n"); /* Coordenada da cadeira */
						printf("\n			Informe o número da fileira: ");
						scanf("%i",&rx);
						while(rx>x or rx<0){
							printf("\n					  VALOR INVÁLIDO.\n			      O valor deve ser condizente com a realidade.\n");
							printf("\n			Informe o número da fileira: "); 
							scanf("%i",&rx);
						}
						printf("\n			Informe o número da coluna: ");
						scanf("%i",&ry);
						while(ry>y or ry<0){
							printf("\n					  VALOR INVÁLIDO.\n			      O valor deve ser condizente com a realidade.\n");
							printf("\n			Informe o número da coluna: "); 
							scanf("%i",&ry);
						}
						if(teatro[rx-1][ry-1]=='-'){
							teatro[rx-1][ry-1]='R';
							lr++;
							vt=vt+vc;
						}
						else{
							printf("\n					  VALOR INVÁLIDO.\n			      		Lugar indisponível.\n");
							Sleep(500);
							break;
						}
					}
					else{
						printf("\n					  VALOR INVÁLIDO.\n			      	  Valor não correspondente.\n");
						Sleep(500);
						break;
					}
				}
				/* Cancelamento */
				else if(o33==2){
					printf("\n			Informe a posição do local à ser cancelado:\n"); /* Coordenada da cadeira */
						printf("\n			Informe o número da fileira: ");
						scanf("%i",&rx);
						while(rx>x or rx<0){
							printf("\n					  VALOR INVÁLIDO.\n			      O valor deve ser condizente com a realidade.\n");
							printf("\n			Informe o número da fileira: "); 
							scanf("%i",&rx);
						}
						printf("\n			Informe o número da coluna: ");
						scanf("%i",&ry);
						while(ry>y or ry<0){
							printf("\n					  VALOR INVÁLIDO.\n			      O valor deve ser condizente com a realidade.\n");
							printf("\n			Informe o número da coluna: "); 
							scanf("%i",&ry);
						}
						if(teatro[rx-1][ry-1]=='R'){
							teatro[rx-1][ry-1]='-';
							lr--;
							vt=vt-vc;
						}
						else{
							printf("\n					  VALOR INVÁLIDO.\n			      		Lugar não reservado.\n");
							break;
						}
				}
				/* Confirmação de envio de opção */
				printf("\n                        ----------------------------------------------------\n"); 
				printf("\n			Verifique se todos os valores enviados estão corretos.\n			Confirmar envio?\n			0-Sim\n			1-Não\n			Infome a opção desejada: "); /* Confirmar envio da opção */
				scanf("%i",&c3);
				while(c3!=0 and c3!=1){ /* Correção de opção inválida */
					printf("\n					  VALOR INVÁLIDO.\n			      O valor deve ser uma das opções acima.\n");
					printf("\n			Informe a opção desejada: "); 
					scanf("%i",&c3);
				}
				if(c3==1){ /* Cancelar função */
					teatro[rx-1][ry-1]='-';
					lr--;
					vt=vt-vc;
					Sleep(500);
					break; 
				}
			}
			c3=1; /* Zerando para poder executar posteriormente */
		}
		else if(o==4){ /* Escolha de opção 4 - Vender um lugar (inteira) */
			/* Correção da sequência de funções */
			if(o1==0){
				printf("\n					  VALOR INVÁLIDO.\n			As funções de reserva(3), venda(4 e 5), verificação\n			de mapa(6), fechar espetáculo(7) e verificação de\n			parciais(8) só estarão disponíveis após a execução das\n			funções 1 e 2.\n\n");
				Sleep(2500);
				system("cls");
				continue;
			}
			else if(o2==0){
				printf("\n					  VALOR INVÁLIDO.\n			As funções de reserva(3), venda(4 e 5), verificação\n			de mapa(6), fechar espetáculo(7) e verificação de\n			parciais(8) só estarão disponíveis após a execução das\n			funções 1 e 2.\n\n");
				Sleep(2500);
				system("cls");
				continue;
			}
			while(c4==1){
				printf("\n			O local à ser comprado estava reservado anteriormente?\n			1-Sim\n			2-Não\n			Informe a opção: ");
				scanf("%i",&clr);
				while(clr!=1 and clr!=2){ /* Correção de opção inválida */
					printf("\n					  VALOR INVÁLIDO.\n			      O valor deve ser uma das opções acima.\n");
					printf("\n			Informe a opção desejada: "); 
					scanf("%i",&clr);
				}
				if(clr==1){
					printf("\n			O valor a ser pago pela compra do lugar é de %.2f.",v*(0.4));
					printf("\n			Informe o valor recebido do cliente: ");
					scanf("%f",&vc);
					printf("\n                        ----------------------------------------------------\n"); 
					if(vc==(v*0.4)){
						printf("\n			Informe a posição do local à ser comprado:\n"); /* Coordenada da cadeira */
						printf("\n			Informe o número da fileira: ");
						scanf("%i",&rx);
						while(rx>x or rx<0){
							printf("\n					  VALOR INVÁLIDO.\n			      O valor deve ser condizente com a realidade.\n");
							printf("\n			Informe o número da fileira: "); 
							scanf("%i",&rx);	
						}
						printf("\n			Informe o número da coluna: ");
						scanf("%i",&ry);
						while(ry>y or ry<0){
							printf("\n					  VALOR INVÁLIDO.\n			      O valor deve ser condizente com a realidade.\n");
							printf("\n			Informe o número da coluna: "); 
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
							printf("\n					  VALOR INVÁLIDO.\n			      		Lugar não estava reservado.\n");
							Sleep(500);
							break;
						}
					}
					else{
						printf("\n					  VALOR INVÁLIDO.\n			      		Valor não correspondente.\n");
						Sleep(500);
						break;
					}
				}
				else{
					printf("\n			O valor a ser pago pela compra do lugar é de %.2f.",v);
					printf("\n			Informe o valor recebido do cliente: ");
					scanf("%f",&vc);
					printf("\n                        ----------------------------------------------------\n"); 
					if(vc==v){
						printf("\n			Informe a posição do local à ser comprado:\n"); /* Coordenada da cadeira */
						printf("\n			Informe o número da fileira: ");
						scanf("%i",&rx);
						while(rx>x or rx<0){
							printf("\n					  VALOR INVÁLIDO.\n			      O valor deve ser condizente com a realidade.\n");
							printf("\n			Informe o número da fileira: "); 
							scanf("%i",&rx);	
						}
						printf("\n			Informe o número da coluna: ");
						scanf("%i",&ry);
						while(ry>y or ry<0){
							printf("\n					  VALOR INVÁLIDO.\n			      O valor deve ser condizente com a realidade.\n");
							printf("\n			Informe o número da coluna: "); 
							scanf("%i",&ry);
						}
						if(teatro[rx-1][ry-1]=='-'){
							teatro[rx-1][ry-1]='V';
							lv++;
							iv++;
							vt=vt+vc;
						}
						else{
							printf("\n					  VALOR INVÁLIDO.\n			      		Lugar indisponível.\n");
							Sleep(500);
							break;
						}
					}
					else{
						printf("\n					  VALOR INVÁLIDO.\n			      		Valor não correspondente.\n");
						Sleep(500);
						break;
					}
				}
				/* Confirmação de envio de opção */
				printf("\n                        ----------------------------------------------------\n"); 
				printf("\n			Verifique se todos os valores enviados estão corretos.\n			Confirmar envio?\n			0-Sim\n			1-Não\n			Infome a opção desejada: "); /* Confirmar envio da opção */
				scanf("%i",&c4);
				while(c4!=0 and c4!=1){ /* Correção de opção inválida */
					printf("\n					  VALOR INVÁLIDO.\n			      O valor deve ser uma das opções acima.\n");
					printf("\n			Informe a opção desejada: "); 
					scanf("%i",&c4);
				}
				if(c4==1){ /* Cancelar função */
					break; 
				}
			}
			c4=1; /* Zerando para poder executar posteriormente */
		}
		else if(o==5){ /* Escolha de opção 5 - Vender um lugar (meia) */
			/* Correção da sequência de funções */
			if(o1==0){
				printf("\n					  VALOR INVÁLIDO.\n			As funções de reserva(3), venda(4 e 5), verificação\n			de mapa(6), fechar espetáculo(7) e verificação de\n			parciais(8) só estarão disponíveis após a execução das\n			funções 1 e 2.\n\n");
				Sleep(2500);
				system("cls");
				continue;
			}
			else if(o2==0){
				printf("\n					  VALOR INVÁLIDO.\n			As funções de reserva(3), venda(4 e 5), verificação\n			de mapa(6), fechar espetáculo(7) e verificação de\n			parciais(8) só estarão disponíveis após a execução das\n			funções 1 e 2.\n\n");
				Sleep(2500);
				system("cls");
				continue;
			}
			while(c5==1){
				printf("\n			O local à ser comprado estava reservado anteriormente?\n			1-Sim\n			2-Não\n			Informe a opção: ");
				scanf("%i",&clr);
				while(clr!=1 and clr!=2){ /* Correção de opção inválida */
					printf("\n					  VALOR INVÁLIDO.\n			      O valor deve ser uma das opções acima.\n");
					printf("\n			Informe a opção desejada: "); 
					scanf("%i",&clr);
				}
				if(clr==1){
					printf("\n			O valor a ser pago pela compra do lugar é de %.2f.",((v/2)*(0.4)));
					printf("\n			Informe o valor recebido do cliente: ");
					scanf("%f",&vc);
					printf("\n                        ----------------------------------------------------\n"); 
					if(vc==((v/2)*0.4)){
						printf("\n			Informe a posição do local à ser comprado:\n"); /* Coordenada da cadeira */
						printf("\n			Informe o número da fileira: ");
						scanf("%i",&rx);
						while(rx>x or rx<0){
							printf("\n					  VALOR INVÁLIDO.\n			      O valor deve ser condizente com a realidade.\n");
							printf("\n			Informe o número da fileira: "); 
							scanf("%i",&rx);	
						}
						printf("\n			Informe o número da coluna: ");
						scanf("%i",&ry);
						while(ry>y or ry<0){
							printf("\n					  VALOR INVÁLIDO.\n			      O valor deve ser condizente com a realidade.\n");
							printf("\n			Informe o número da coluna: "); 
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
							printf("\n					  VALOR INVÁLIDO.\n			      		Lugar não estava reservado.\n");
							Sleep(500);
							break;
						}
					}
					else{
						printf("\n					  VALOR INVÁLIDO.\n			      		Valor não correspondente.\n");
						Sleep(500);
						break;
					}
				}
				else{
					printf("\n			O valor a ser pago pela compra do lugar é de %.2f.",(v/2));
					printf("\n			Informe o valor recebido do cliente: ");
					scanf("%f",&vc);
					printf("\n                        ----------------------------------------------------\n"); 
					if(vc==(v/2)){
						printf("\n			Informe a posição do local à ser comprado:\n"); /* Coordenada da cadeira */
						printf("\n			Informe o número da fileira: ");
						scanf("%i",&rx);
						while(rx>x or rx<0){
							printf("\n					  VALOR INVÁLIDO.\n			      O valor deve ser condizente com a realidade.\n");
							printf("\n			Informe o número da fileira: "); 
							scanf("%i",&rx);	
						}
						printf("\n			Informe o número da coluna: ");
						scanf("%i",&ry);
						while(ry>y or ry<0){
							printf("\n					  VALOR INVÁLIDO.\n			      O valor deve ser condizente com a realidade.\n");
							printf("\n			Informe o número da coluna: "); 
							scanf("%i",&ry);
						}
						if(teatro[rx-1][ry-1]=='-'){
							teatro[rx-1][ry-1]='V';
							lv++;
							mv++;
							vt=vt+vc;
						}
						else{
							printf("\n					  VALOR INVÁLIDO.\n			      		Lugar indisponível.\n");
							Sleep(500);
							break;
						}
					}
					else{
						printf("\n					  VALOR INVÁLIDO.\n			      		Valor não correspondente.\n");
						Sleep(500);
						break;
					}
				}
				/* Confirmação de envio de opção */
				printf("\n                        ----------------------------------------------------\n"); 
				printf("\n			Verifique se todos os valores enviados estão corretos.\n			Confirmar envio?\n			0-Sim\n			1-Não\n			Infome a opção desejada: "); /* Confirmar envio da opção */
				scanf("%i",&c5);
				while(c5!=0 and c5!=1){ /* Correção de opção inválida */
					printf("\n					  VALOR INVÁLIDO.\n			      O valor deve ser uma das opções acima.\n");
					printf("\n			Informe a opção desejada: "); 
					scanf("%i",&c5);
				}
				if(c5==1){ /* Cancelar função */
					break; 
				}
			}
			c5=1; /* Zerando para poder executar posteriormente */
			}
		else if(o==6){ /* Escolha de opção 6 - Verificar mapa do teatro */
			/* Correção da sequência de funções */
			if(o1==0){
				printf("\n					  VALOR INVÁLIDO.\n			As funções de reserva(3), venda(4 e 5), verificação\n			de mapa(6), fechar espetáculo(7) e verificação de\n			parciais(8) só estarão disponíveis após a execução das\n			funções 1 e 2.\n\n");
				Sleep(2500);
				system("cls");
				continue;
			}
			else if(o2==0){
				printf("\n					  VALOR INVÁLIDO.\n			As funções de reserva(3), venda(4 e 5), verificação\n			de mapa(6), fechar espetáculo(7) e verificação de\n			parciais(8) só estarão disponíveis após a execução das\n			funções 1 e 2.\n\n");
				Sleep(2500);
				system("cls");
				continue;
			}
			/* Saída gráfica */				
	    	for (x2 = 0; x2 < x; x2++){
				for (y2 = 0; y2 < y; y2++){
					printf(" |%c|",teatro[x2][y2]);
         		} 
         		printf("\n");
    		}
			printf("\n			Aperte 1 para continuar: "); /* Sair da saída gráfica */
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
		else if(o==7){ /* Escolha de opção 7 - Encerrar o espetáculo */
			/* Correção da sequência de funções */
			if(o1==0){
				printf("\n					  VALOR INVÁLIDO.\n			As funções de reserva(3), venda(4 e 5), verificação\n			de mapa(6), fechar espetáculo(7) e verificação de\n			parciais(8) só estarão disponíveis após a execução das\n			funções 1 e 2.\n\n");
				Sleep(2500);
				system("cls");
				continue;
			}
			else if(o2==0){
				printf("\n					  VALOR INVÁLIDO.\n			As funções de reserva(3), venda(4 e 5), verificação\n			de mapa(6), fechar espetáculo(7) e verificação de\n			parciais(8) só estarão disponíveis após a execução das\n			funções 1 e 2.\n\n");
				Sleep(2500);
				system("cls");
				continue;
			}
			printf("\n			Deseja mesmo encerrar o espetáculo?\n			0-Sim\n			1-Não\n			Infome a opção desejada: "); 
			scanf("%i",&c7);
			while(c7!=0 and c7!=1){ /* Correção de opção inválida */
				printf("\n					  VALOR INVÁLIDO.\n			      O valor deve ser uma das opções acima.\n");
				printf("\n			Informe a opção desejada: "); 
				scanf("%i",&c7);
			}
			if((lv+lr)*100/(x*y)>=60){
			/* Confirmação de envio de opção */
				printf("\n                        ----------------------------------------------------\n"); 
				printf("\n			Verifique se todos os valores enviados estão corretos.\n			Confirmar envio?\n			0-Sim\n			1-Não\n			Infome a opção desejada: "); /* Confirmar envio da opção */
				scanf("%i",&c7);
				while(c7!=0 and c7!=1){ /* Correção de opção inválida */
					printf("\n					  VALOR INVÁLIDO.\n			      O valor deve ser uma das opções acima.\n");
					printf("\n			Informe a opção desejada: "); 
					scanf("%i",&c7);
				}
				o7=1;
				if(c7==1){ /* Cancelar função */
					break; 
				}	
			}
			else{
				printf("\n					  VALOR INVÁLIDO.\n			O espetáculo ainda não cumpriu a cota mínima de 60 porcento e portanto não pode ser encerrado.");
				Sleep(2500);
				system("cls");
				continue;
			}
			c7=0;
		}
		else if(o==8){ /* Escolha de opção 8 - Verificar parciais */
			/* Correção da sequência de funções */
			if(o1==0){
				printf("\n					  VALOR INVÁLIDO.\n			As funções de reserva(3), venda(4 e 5), verificação\n			de mapa(6), fechar espetáculo(7) e verificação de\n			parciais(8) só estarão disponíveis após a execução das\n			funções 1 e 2.\n\n");
				Sleep(2500);
				system("cls");
				continue;
			}
			else if(o2==0){
				printf("\n					  VALOR INVÁLIDO.\n			As funções de reserva(3), venda(4 e 5), verificação\n			de mapa(6), fechar espetáculo(7) e verificação de\n			parciais(8) só estarão disponíveis após a execução das\n			funções 1 e 2.\n\n");
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
			printf("\n			Aperte 1 para continuar: "); /* Sair da saída gráfica */
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
			printf("\n					  VALOR INVÁLIDO.\n			      O valor deve ser uma das opções acima.\n");
			Sleep(1000);                                                                                                       
		}
		/* Limpar a tela */
		printf("\n                        ----------------------------------------------------");
		Sleep(500);
		system("cls");
	}
	/* Conclusão */
	printf("\n			Espetáculo encerrado!");
	printf("\n			Parabéns, o espetáculo foi um sucesso!");
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
