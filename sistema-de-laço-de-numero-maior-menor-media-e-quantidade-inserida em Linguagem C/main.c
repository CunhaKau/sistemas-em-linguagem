#include <stdio.h>
#include <stdlib.h>

/* 
A � Fa�a um algoritmo que implemente um la�o que leia X n�meros inteiros
e identifique qual o menor o maior e a media, quando o n�mero informado 
for zero, interrompa o la�o e exiba os valores.
*/

int main(int argc, char *argv[]) {	
	//fa�a enquanto 1...n repeticoes indeterminadas 
	float valor;
	float media=0;
	float maior=0;
	float menor=9999999;
	int cont = 0;
	
	do
	{
		printf("informe um numero, e quando quiser parar a insercao de numeros digite zero:");
		scanf("%f", &valor);	
		if(valor!=0){		
			if(valor < menor){
				menor = valor;	
			}	
			if(valor > maior){
				maior = valor;	
			}
			media = media + valor;
			cont++;
		}
	}while(valor != 0);
	media = media / cont;
	printf(" \n Maior numero=%2.f,\n Menor numero=%2.f,\n Media=%2.f,\n Qtd de numeros inseridos= %d", maior, menor, media, cont);
	
	//outra forma
	media = 0;
	cont  = 0;
	maior = 0;
	menor = 0;
	do
	{
		printf("\n\n Informe um numero, e quando quiser parar a insercao de numeros digite zero:");
		scanf("%f", &valor);	
		if(valor!=0){		
			if(cont==0){
				menor=valor;
				maior=valor;	
			} else {
				if(valor < menor){
					menor = valor;	
				}	
				if(valor > maior){
					maior = valor;	
				}
			}
			media = media + valor;
			cont++;
		}
	}while(valor != 0);
	media = media / cont;
	printf(" \n Maior numero=%2.f,\n Menor numero=%2.f,\n Media=%2.f,\n Qtd de numeros inseridos= %d", maior, menor, media, cont);
	
	return 0;
}
