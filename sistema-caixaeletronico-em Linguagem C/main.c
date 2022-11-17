#include <stdio.h>
#include <stdlib.h>

/* 
1) fa�a um algoritmo que simule o funcionamento de um caixa eletr�nico, 
onde ser� apresentado uma lista de opera��es:
1-Saldo
2-Saque
3-Deposito
Ao iniciar o programa determine um valor inicio para a vari�vel saldo, 
se o cliente escolher a op��o 1 mostre o valor do saldo, caso escolha 
o valor 2 leia o valor a ser sacado e verifique se existe saldo suficiente, 
se o saldo for maior ou igual , deduza da vari�vel saldo o valor solicitado,
caso n�o haja saldo suficiente mostre a mensagem �Saldo Insuficiente�,
caso a op��o 3 seja escolhida adicione o valor informado de deposito ao 
saldo.
*/

int main(int argc, char *argv[]) {
	float saldo = 1000;
	float valor;
	int op; //1-saldo 2-Saque 3-deposito
	
	printf ("Escolha uma opcao para continuar:\n");
	printf(" 1-saldo\n 2-saque\n 3-deposito\n");
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
			printf("Opcao invalida!");
			break;
		}		
	}
	
	
	return 0;
}
