/*Programa: Velha
* Função: Jogo da Velha
* Autores: Cauê Vicentini Ruiz e Laisa Cristiana Gonçalve Ruiz
* Data: 23/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");	
	/* Declaração de variáveis e atribuição de valores iniciais */
	char velha[3][3], nome1[30], nome2[30] /* Nome dos jogadores */, j1[30], j2[30] /* Quem começa */, s1[1], s2[1] /* x ou o */;
	int i,j/* coordenada jogadas */,c=0 /* contador de jogadas */,v1=0,v2=0 /* Contadores de vitória */,a=1 /* Continua ou fim */,e1,e2,g=0 /* Saída gráfica */;
	for(i=0;i<3;i++){ /* Atribuição de valores à matriz */
		for(j=0;j<3;j++){
			velha[i][j]='-';
		}
	}
	/* Introdução */
	printf("Sejam bem-vindos!\n");
	printf("Este é o jogo da velha, bom jogo!\n\n");
	printf("Regras:\n");
	printf("1-Vence quem completar uma linha, coluna ou diagonal primeiro.\n");
	printf("2-As jogadas são intercaladas entre x e o.\n");
	printf("3-Os jogadores decidem quem começa.\n\n");
	/* Jogadores */
	printf("Informe o nome do primeiro jogador: ");
    gets(nome1);
    fflush(stdin);
    printf("Informe o nome do segundo jogador: ");
    gets(nome2);
    fflush(stdin);
    while(a==1){ /* Jogo completo */
    	printf("Quem começará jogando?\n"); /* Quem começa Player 1 */
	    printf("1-",nome1,"\n");
	    printf("2-",nome2,"\n");
	    printf("Informe o número da opção desejada: ");
	    scanf("%i",&e1);
	    while(e1!=1 and e1!=2){ /* Correção de erro de opção inválida */
	    	printf("Opção inválida. Escolha uma das opções acima: \n");
	    	scanf("%i",&e1);
		}
		if(e1==1){
			j1[30]=nome1[30];
		}
		else{
			j1[30]=nome2[30];
		}
		if(j1==nome1){ /* Que jogador é o player 1 e o player 2 */
			j2[30]=nome2[30];
		}
		else{
			j2[30]=nome1[30];
		}
		printf("%s, você deseja jogar com x ou o?\n", j1); /* Definição do símbolo do player 1*/
		gets(s1);
		fflush(stdin);
		while(s1!="x" and s1!="X" and s1!="o" and s1!="O"){ /* Correção de erro de símbolo inválido */
			printf("Este não é um símbolo válido! Informe um dos símbolos citados acima: ");
			gets(s1);
			fflush(stdin);
		}
		if(s1[1]=='x'){ /* Correção de Maiúsculo */
			s1[1]='x';
		}
		if(s1[1]=='O'){
			s1[1]='o';
		}
		if(s1[1]=='x'){ /* Quem é x e quem é o */
			s2[1]='o';
		}
		else{
			s2[1]='x';
		}
		/* Tabuleiro */
		printf("\nEste é o tabuleiro do jogo:\n\n");
	    printf("   1   2   3 \n");
	    printf("1    |   |   \n");
	    printf("  -----------\n");
	    printf("2    |   |   \n");
	    printf("  -----------\n");
	    printf("3    |   |   \n\n");
	    /* Código para realização das jogadas */
	    for(c=0;c<9;c++){ /* Rodada */
	    	if(c%2==0){ /* Mostra de quem é a vez */
	    		printf("\nVez de %s:", j1);
			}
			if(c%2==1){
				printf("\nVez de %s: ",j2);
			}
			/* Leitura das jogadas */
			printf("\nInforme a posição que deseja jogar: \n");
			printf("Informe a linha: ");
			scanf("%i",&i);
			while(i<1 or i>3){ /* Correção de erro de jogada inválida */
		    	printf("Jogada inválida. Informe outro valor para linha: ");
				scanf("%i",&i);
			}
			printf("Informe a coluna: ");
			printf("%i",&j);
			while(j<1 or j>3){ /* Correção de erro de jogada inválida */
		    	printf("Jogada inválida. Informe outro valor para coluna: ");
				scanf("%i",&j);
			}
			/* Desenvolvimento */
			if(c%2==0){ /* Alternância de jogadores */
				if(velha[i-1][j-1]=='-'){
					velha[i-1][j-1]=s1[1]; /* Colocar a jogada */
				}
				else{ /* Correção de erro de jogada repetida */
			    	printf("Jogada repetida, informe outra jogada.\n");
			    	c--;
				}
			}	
			else if(c%2==1){ /* Alternância de jogadores */
				if(velha[i-1][j-1]=='-'){
					velha[i-1][j-1]=s2[1]; /* Colocar a jogada */
				}
				else{ /* Correção de erro de jogada repetida */
			    	printf("Jogada repetida, informe outra jogada.\n");
			    	c--;
				}
			}	
			/* Saída gráfica de cada jogada */
			printf("  1 2 3\n");
			for(i=0;i<3;i++){
				printf("%i",g++);
				for(j=0;j<3;j++){
					printf("%s", velha[i][j]);
				}
				printf("\n");
			}
			g=0;
			/* Verificação de Vitória */
	    	/* Vitória de player 1 */
	    	if(velha[0][0]==s1[1] and velha[0][1]==s1[1] and velha[0][2]==s1[1] or velha[1][0]==s1[1] and velha[1][1]==s1[1] and velha[1][2]==s1[1] or velha[2][0]==s1[1] and velha[2][1]==s1[1] and velha[2][2]==s1[1] or velha[0][0]==s1[1] and velha[1][0]==s1[1] and velha[2][0]==s1[1] or velha[0][1]==s1[1] and velha[1][1]==s1[1] and velha[2][1]==s1[1] or velha[0][2]==s1[1] and velha[1][2]==s1[1] and velha[2][2]==s1[1] or velha[0][0]==s1[1] and velha[1][1]==s1[1] and velha[2][2]==s1[1] or velha[0][2]==s1[1] and velha[1][1]==s1[1] and velha[2][0]==s1[1]){
	    		printf("\nVitória!\n");
	    		if(j1==nome1){ /* Quem é o player 1 */
	    			printf("O vencedor foi %s, parabéns!\n",nome1);
	    			v1++;
				}
				else if(j1==nome2){
					printf("O vencedor foi %s, parabéns!\n",nome2);
					v2++;
				}
				c=9;
			}
			/* Vitória de player 2 */
	    	if(velha[0][0]==s2[1] and velha[0][1]==s2[1] and velha[0][2]==s2[1] or velha[1][0]==s2[1] and velha[1][1]==s2[1] and velha[1][2]==s2[1] or velha[2][0]==s2[1] and velha[2][1]==s2[1] and velha[2][2]==s2[1] or velha[0][0]==s2[1] and velha[1][0]==s2[1] and velha[2][0]==s2[1] or velha[0][1]==s2[1] and velha[1][1]==s2[1] and velha[2][1]==s2[1] or velha[0][2]==s2[1] and velha[1][2]==s2[1] and velha[2][2]==s2[1] or velha[0][0]==s2[1] and velha[1][1]==s2[1] and velha[2][2]==s2[1] or velha[0][2]==s2[1] and velha[1][1]==s2[1] and velha[2][0]==s2[1]){
	    		printf("\nVitória!\n");
	    		if(j2==nome1){ /* Quem é o player 1 */
	    			printf("O vencedor foi %s, parabéns!\n",nome1);
	    			v1++;
				}
				else if(j2==nome2){
					printf("O vencedor foi %s, parabéns!\n",nome2);
					v2++;
				}
				c=9;
			}
			/* Verificação de velha */
			else if(c==8){
				printf("\nDeu velha!\n");
			}
		}
		/*Exibição de placar*/
		printf("\nO placar está assim:\n");
		printf("%s %i x %i %s\n",nome1,v1,v2,nome2);
		/* Continua ou fim */
	    printf("\nVocês desejam continuar jogando?\n");
	    printf("1-Sim!\n");
	    printf("2-Não.\n");
	    printf("Informe o número da opção desejada: ");
	    scanf("%i",&a);
	    while(a!=1 and a!=2){ /* Correção de erro de opção inválida */
	    	printf("Opção inválida. Escolha uma das opções acima: \n");
	    	scanf("%i",&a);
		}
		for(i=0; i<3;i++){ /* Zerando para próxima rodada */ 
			for(j=0; j<3; j++){
				velha[i][j]='-';
			}
		}
		printf("\n");
	}
	/* Fim de jogo */
	if(a==2){
		printf("Fim de jogo!\n");
		/* Exibição de placar final */
		printf("O placar final do jogo foi:\n");
		printf("%s %i x %i %s \n",nome1,v1,v2,nome2);
		if(v1>v2){
			printf("O vencedor geral foi %s. Parabéns!\n",nome1);
		}
		else if(v2>v1){
			printf("O vencedor geral foi %s. Parabéns!\n",nome2);
		}
		else{
			printf("O jogo terminou em empate.");
		}
	}
}


