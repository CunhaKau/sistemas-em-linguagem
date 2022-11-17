#include <stdio.h>
#include <stdlib.h>

/* 
Reutilizando o algoritmo do caixa eletrônico, 
implemente um laço faça enquanto que verifique se o usuário deseja continuar, 
caso a variável coletada for igual 1 reinicie o laço, mantendo o valor do saldo.
*/

int main(int argc, char *argv[]) {
	float saldo = 1000;
	float valor;
	int op; //1-saldo 2-Saque 3-deposito
	int continua;
	
	do {
		system("cls");
		printf("Informe 1-saldo 2-saque 3-deposito:");
		scanf("%d", &op);
		
		switch(op){
			case 1:{
				printf("O valor do saldo= %2.f", saldo);
				break;
			}	
			case 2:{
				printf("Informe o valor do saque:");
				scanf("%f", &valor);
				if(valor > saldo){
					printf("Saldo insuficiente!");	
				} else {
					saldo = saldo - valor;
					printf("Saque realizado com sucesso! Saldo atual:%2.f", saldo);	
				}
				break;
			}
			case 3:{			
				printf("Informe o valor do deposito:");
				scanf("%f", &valor);
				saldo = saldo + valor;
				printf("Deposito efetuado com sucesso! Saldo atual:%2.f", saldo);	
				break;
			}
			default :{
				printf("Opcao invalida !");
				break;
			}		
		}
		
		printf("\nDeseja Continuar 1-Sim, 0-Nao");
		scanf("%d", &continua);
	} while (continua==1);
	
	
	return 0;
}
