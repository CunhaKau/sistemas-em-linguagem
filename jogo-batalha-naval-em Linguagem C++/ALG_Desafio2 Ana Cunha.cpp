#include <stdio.h>
#include <stdlib.h>

int main() {
	int op, barco, ponto = 0;
	int campo[10][10];
	int i, j, l, c;

	//zera as entradas da matriz campo.
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			campo[i][j] = 0;
		}
	}

	do {
		printf("\nVoce esta na batalha naval da Kau Cunha\nEscolha uma opcao:\n1 - Criar campo de batalha\n2 - Jogar\n3 - Resultado\n4- Sair\nOpcao Escolhida: ");
		scanf("%d", &op);
		system("cls");
		switch (op)//opcaoes do menu criado acima
		{
		case 1: {//Define o campo de batalha
			j = 10;
			printf("\n1 - CRIAR CAMPO DE BATALHA\n");
			for (i = 0; i < 10; i++) {

				printf("Escolha o tipo de embarcacao:\n1 - Fragata\n2 - Destroier\n3 - Submarino\n Digite a opcao:");
				scanf("%d", &barco);
				
				if (barco == 1) {
					printf("\nDefina posicao da Fragata");
				}
				else {
					if (barco == 2) {
						printf("\nDefina posicao do Destroier");
					}
					else {
						printf("\nDefina posicao do Submarino");
					}
				}

				printf("\nLinha: ", i + 1);
				scanf("%d", &l);

				printf("Coluna: ");
				scanf("%d", &c);

				campo[l - 1][c - 1] = barco;

				if (j > 1) {
					printf("Restam definir %d jogadas\n", j - 1);
					j = j - 1;
				}
				else {
					system("cls");
					printf("O jogador 1 definiu as 10 posicoes.\nAgora, selecione jogar");
					system("PAUSE");
				}
			}
			break;
		}
		case 2: {
			
          
		{for (i = 0; i < 10; i++) {
				printf("\n2 - JOGAR\n");
				printf("\tJogador 2 - Ataque %d ", i + 1);
				printf("\nLinha: ", i + 1);
				scanf("%d", &l);

				printf("Coluna: ");
				scanf("%d", &c);

				if (campo[l - 1][c - 1] == 0) {
					printf("\nNA AGUA! :(\n\n");
				}
				else {
					printf("\nACERTOU UAU! :)\n\n");
					ponto += campo[l - 1][c - 1];
			}	}
			}

			break;
		}
		case 3: {
			printf("\n1 - PONTUACAO\n");
			printf("Sua pontucao: %d", ponto);
			break;
		}
		case 4: {
			printf("\nObrigada por jogar, ate mais!\n");
			//Sair do programa
			break;
		}
		default: {
			printf("Confira as opcoes disponiveis, tente novamente");
		}
	}
	} while (op != 4);
	
	system("PAUSE");
}
