#include <stdio.h>
#include <stdlib.h>

/* 
Crie um algoritmo onde será informado um valor inteiro
inicial,  e um laço o usuário devera informar outro numero 
inteiro, o programa deverá responder se o numero atual 
e menor ou maior que o numero inicial informado, 
o laço somente será interrompido 
quando o numero atual for igual ao número 
anterior informado. 
Exiba quantas tentativas foram necessárias para que 
o numero fosse descoberto.
 */

int main(int argc, char *argv[]) {
	int numero1, numero2, cont=1;
	
	printf("Informe numero inicial:");
	scanf("%d", &numero1);
	system("cls");
	do{
		printf("Informe um numero:");	
		scanf("%d", &numero2);
		if(numero1 > numero2){
			printf("O numero eh maior!\n");	
		} else {
			if(numero1 < numero2){
				printf("O numero eh menor!\n");		
			} else {
				printf("Voce acertou em %d tentativa(s)\n",cont);		
			}	
		}
		cont++;
	} while(numero1 != numero2);
	
	
	return 0;
}
