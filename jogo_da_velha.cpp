/*Programa: Velha
* Fun��o: Jogo da Velha
* Autores: Cau� Vicentini Ruiz e Laisa Cristiana Gon�alve Ruiz
* Data: 23/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");	
	/* Declara��o de vari�veis e atribui��o de valores iniciais */
	char velha[3][3], nome1[30], nome2[30] /* Nome dos jogadores */, j1[30], j2[30] /* Quem come�a */, s1[1], s2[1] /* x ou o */;
	int i,j/* coordenada jogadas */,c=0 /* contador de jogadas */,v1=0,v2=0 /* Contadores de vit�ria */,a=1 /* Continua ou fim */,e1,e2,g=0 /* Sa�da gr�fica */;
	for(i=0;i<3;i++){ /* Atribui��o de valores � matriz */
		for(j=0;j<3;j++){
			velha[i][j]='-';
		}
	}
	/* Introdu��o */
	printf("Sejam bem-vindos!\n");
	printf("Este � o jogo da velha, bom jogo!\n\n");
	printf("Regras:\n");
	printf("1-Vence quem completar uma linha, coluna ou diagonal primeiro.\n");
	printf("2-As jogadas s�o intercaladas entre x e o.\n");
	printf("3-Os jogadores decidem quem come�a.\n\n");
	/* Jogadores */
	printf("Informe o nome do primeiro jogador: ");
    gets(nome1);
    fflush(stdin);
    printf("Informe o nome do segundo jogador: ");
    gets(nome2);
    fflush(stdin);
    while(a==1){ /* Jogo completo */
    	printf("Quem come�ar� jogando?\n"); /* Quem come�a Player 1 */
	    printf("1-",nome1,"\n");
	    printf("2-",nome2,"\n");
	    printf("Informe o n�mero da op��o desejada: ");
	    scanf("%i",&e1);
	    while(e1!=1 and e1!=2){ /* Corre��o de erro de op��o inv�lida */
	    	printf("Op��o inv�lida. Escolha uma das op��es acima: \n");
	    	scanf("%i",&e1);
		}
		if(e1==1){
			j1[30]=nome1[30];
		}
		else{
			j1[30]=nome2[30];
		}
		if(j1==nome1){ /* Que jogador � o player 1 e o player 2 */
			j2[30]=nome2[30];
		}
		else{
			j2[30]=nome1[30];
		}
		printf("%s, voc� deseja jogar com x ou o?\n", j1); /* Defini��o do s�mbolo do player 1*/
		gets(s1);
		fflush(stdin);
		while(s1!="x" and s1!="X" and s1!="o" and s1!="O"){ /* Corre��o de erro de s�mbolo inv�lido */
			printf("Este n�o � um s�mbolo v�lido! Informe um dos s�mbolos citados acima: ");
			gets(s1);
			fflush(stdin);
		}
		if(s1[1]=='x'){ /* Corre��o de Mai�sculo */
			s1[1]='x';
		}
		if(s1[1]=='O'){
			s1[1]='o';
		}
		if(s1[1]=='x'){ /* Quem � x e quem � o */
			s2[1]='o';
		}
		else{
			s2[1]='x';
		}
		/* Tabuleiro */
		printf("\nEste � o tabuleiro do jogo:\n\n");
	    printf("   1   2   3 \n");
	    printf("1    |   |   \n");
	    printf("  -----------\n");
	    printf("2    |   |   \n");
	    printf("  -----------\n");
	    printf("3    |   |   \n\n");
	    /* C�digo para realiza��o das jogadas */
	    for(c=0;c<9;c++){ /* Rodada */
	    	if(c%2==0){ /* Mostra de quem � a vez */
	    		printf("\nVez de %s:", j1);
			}
			if(c%2==1){
				printf("\nVez de %s: ",j2);
			}
			/* Leitura das jogadas */
			printf("\nInforme a posi��o que deseja jogar: \n");
			printf("Informe a linha: ");
			scanf("%i",&i);
			while(i<1 or i>3){ /* Corre��o de erro de jogada inv�lida */
		    	printf("Jogada inv�lida. Informe outro valor para linha: ");
				scanf("%i",&i);
			}
			printf("Informe a coluna: ");
			printf("%i",&j);
			while(j<1 or j>3){ /* Corre��o de erro de jogada inv�lida */
		    	printf("Jogada inv�lida. Informe outro valor para coluna: ");
				scanf("%i",&j);
			}
			/* Desenvolvimento */
			if(c%2==0){ /* Altern�ncia de jogadores */
				if(velha[i-1][j-1]=='-'){
					velha[i-1][j-1]=s1[1]; /* Colocar a jogada */
				}
				else{ /* Corre��o de erro de jogada repetida */
			    	printf("Jogada repetida, informe outra jogada.\n");
			    	c--;
				}
			}	
			else if(c%2==1){ /* Altern�ncia de jogadores */
				if(velha[i-1][j-1]=='-'){
					velha[i-1][j-1]=s2[1]; /* Colocar a jogada */
				}
				else{ /* Corre��o de erro de jogada repetida */
			    	printf("Jogada repetida, informe outra jogada.\n");
			    	c--;
				}
			}	
			/* Sa�da gr�fica de cada jogada */
			printf("  1 2 3\n");
			for(i=0;i<3;i++){
				printf("%i",g++);
				for(j=0;j<3;j++){
					printf("%s", velha[i][j]);
				}
				printf("\n");
			}
			g=0;
			/* Verifica��o de Vit�ria */
	    	/* Vit�ria de player 1 */
	    	if(velha[0][0]==s1[1] and velha[0][1]==s1[1] and velha[0][2]==s1[1] or velha[1][0]==s1[1] and velha[1][1]==s1[1] and velha[1][2]==s1[1] or velha[2][0]==s1[1] and velha[2][1]==s1[1] and velha[2][2]==s1[1] or velha[0][0]==s1[1] and velha[1][0]==s1[1] and velha[2][0]==s1[1] or velha[0][1]==s1[1] and velha[1][1]==s1[1] and velha[2][1]==s1[1] or velha[0][2]==s1[1] and velha[1][2]==s1[1] and velha[2][2]==s1[1] or velha[0][0]==s1[1] and velha[1][1]==s1[1] and velha[2][2]==s1[1] or velha[0][2]==s1[1] and velha[1][1]==s1[1] and velha[2][0]==s1[1]){
	    		printf("\nVit�ria!\n");
	    		if(j1==nome1){ /* Quem � o player 1 */
	    			printf("O vencedor foi %s, parab�ns!\n",nome1);
	    			v1++;
				}
				else if(j1==nome2){
					printf("O vencedor foi %s, parab�ns!\n",nome2);
					v2++;
				}
				c=9;
			}
			/* Vit�ria de player 2 */
	    	if(velha[0][0]==s2[1] and velha[0][1]==s2[1] and velha[0][2]==s2[1] or velha[1][0]==s2[1] and velha[1][1]==s2[1] and velha[1][2]==s2[1] or velha[2][0]==s2[1] and velha[2][1]==s2[1] and velha[2][2]==s2[1] or velha[0][0]==s2[1] and velha[1][0]==s2[1] and velha[2][0]==s2[1] or velha[0][1]==s2[1] and velha[1][1]==s2[1] and velha[2][1]==s2[1] or velha[0][2]==s2[1] and velha[1][2]==s2[1] and velha[2][2]==s2[1] or velha[0][0]==s2[1] and velha[1][1]==s2[1] and velha[2][2]==s2[1] or velha[0][2]==s2[1] and velha[1][1]==s2[1] and velha[2][0]==s2[1]){
	    		printf("\nVit�ria!\n");
	    		if(j2==nome1){ /* Quem � o player 1 */
	    			printf("O vencedor foi %s, parab�ns!\n",nome1);
	    			v1++;
				}
				else if(j2==nome2){
					printf("O vencedor foi %s, parab�ns!\n",nome2);
					v2++;
				}
				c=9;
			}
			/* Verifica��o de velha */
			else if(c==8){
				printf("\nDeu velha!\n");
			}
		}
		/*Exibi��o de placar*/
		printf("\nO placar est� assim:\n");
		printf("%s %i x %i %s\n",nome1,v1,v2,nome2);
		/* Continua ou fim */
	    printf("\nVoc�s desejam continuar jogando?\n");
	    printf("1-Sim!\n");
	    printf("2-N�o.\n");
	    printf("Informe o n�mero da op��o desejada: ");
	    scanf("%i",&a);
	    while(a!=1 and a!=2){ /* Corre��o de erro de op��o inv�lida */
	    	printf("Op��o inv�lida. Escolha uma das op��es acima: \n");
	    	scanf("%i",&a);
		}
		for(i=0; i<3;i++){ /* Zerando para pr�xima rodada */ 
			for(j=0; j<3; j++){
				velha[i][j]='-';
			}
		}
		printf("\n");
	}
	/* Fim de jogo */
	if(a==2){
		printf("Fim de jogo!\n");
		/* Exibi��o de placar final */
		printf("O placar final do jogo foi:\n");
		printf("%s %i x %i %s \n",nome1,v1,v2,nome2);
		if(v1>v2){
			printf("O vencedor geral foi %s. Parab�ns!\n",nome1);
		}
		else if(v2>v1){
			printf("O vencedor geral foi %s. Parab�ns!\n",nome2);
		}
		else{
			printf("O jogo terminou em empate.");
		}
	}
}


