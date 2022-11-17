#include <stdio.h>
#include <stdlib.h>
#define TAM 100

struct no{
 char nome[TAM];
 struct no *prox;
};
//transformando o struct no em tipo item
typedef struct no item;

item *criafila();
void colocanafila(item *FILA);
void tiradafila(item *FILA);
void exibe(item *FILA);
void filavazia(item *FILA);
char tam;

int main(int argc, char *argv[]) {
	//iniciando a fila - criando o primeiro elemento
	item *FILA = (item*)malloc(sizeof(item));
	FILA->prox = NULL;
 	tam=0;
	
	colocanafila(FILA);
	colocanafila(FILA);
	colocanafila(FILA);
	exibe(FILA);
	tiradafila(FILA); //FIFO => First In First Out
	exibe(FILA);
tiradafila(FILA); //FIFO => First In First Out
	exibe(FILA);
	filavazia(FILA);
	return 0;
}



//função para alocar e criar um novo item da lista na memoria
item *criafila()	
{
 	item *novo=(item*)malloc(sizeof(item));
  	printf("Digite o novo nome que sera armazenado em %x:", novo); 
	scanf("%s", &novo->nome);
	novo->prox = NULL;  
  	return novo;
}

void colocanafila(item *FILA)
{
 //cria um ponteiro do novo item alocado na memoria
 item *novo=criafila();
 //verifica se e o primeiro elemento e adiciona o end. Ponteiro no proximo 	
 if(FILA->prox == NULL){
 	FILA->prox=novo;
 } else{
  	item *tmp = FILA->prox;
  	while(tmp->prox != NULL){
  		tmp = tmp->prox;
  	}
  	tmp->prox = novo;
 }
 tam++;
}


void tiradafila(item *FILA)
{
 if(FILA->prox == NULL){
  printf("Fila ja esta vazia\n");
 }else{
  item *tmp = FILA->prox;
  printf("item removido da fila: %x \n", tmp);
  FILA->prox = tmp->prox;
  tam--;
  free(tmp);
 }
}


void exibe(item *FILA)
{
 if(FILA->prox == NULL){
  printf("Fila vazia!\n\n");
 } else {
 	item *tmp = FILA->prox;
 	printf("Fila :\n");
 	while(tmp != NULL){
  		printf("%s => %x \n", tmp->nome, tmp->prox);
  		tmp = tmp->prox;
 	}
 }
}



void filavazia(item *FILA)
{
 if(FILA->prox != NULL){
  item *proxNode, *atual;
  atual = FILA->prox;
  while(atual != NULL){
   proxNode = atual->prox;
   free(atual);
   atual = proxNode;
  }
 }
}
