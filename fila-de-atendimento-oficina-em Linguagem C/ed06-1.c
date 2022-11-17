#include <stdio.h>
#include <stdlib.h>



struct no{
 char  placa[100], modelo [100], problema[100];
 struct no *proximo;
};

typedef struct no item;



item *criafila(){
	item *fila=(item*)malloc(sizeof(item));
	fila->proximo = NULL;
	return fila;
}

int filavazia(item *p)
{
 	if(p->proximo==NULL){
 		return 1;	
	} else {
		return 0;
	}
}

void colocanafila(item *fila)
{
	item *novo=(item*)malloc(sizeof(item));
	printf("Informe a placa do veiculo:"); 
	gets(novo->placa);
	printf("Informe o modelo do veiculo:"); 
	gets(novo->modelo);
	printf("Informe o problema do veiculo :"); 
	gets(novo->problema);
	novo->proximo = NULL;  
	
	
	if(filavazia(fila)==1){
		fila->proximo = novo;	
	} else {
		item *temp = fila->proximo;
		while(temp->proximo != NULL){
			temp = temp->proximo;
		}
		temp->proximo = novo;
	}
}



void tiradafila(item *fila)
{
   if(filavazia(fila)==0){
   		item *temp = fila->proximo; 	
   		fila->proximo = temp->proximo;
		printf("\nItem Removido %x %s \n", temp, temp->placa);
		free(temp);    
   }
}


void exibe(item *fila)
{
   	item *temp = fila->proximo;
	while(temp != NULL){
		printf("Item %x %s \n", temp, temp->placa);
		printf("Item %x %s \n", temp, temp->modelo);
		printf("Item %x %s \n", temp, temp->problema);
		temp = temp->proximo;
	}
}

void total(item *fila)
{
	int comprimento = 0;
   	item *temp = fila->proximo;
	while(temp != NULL){
		comprimento++;
		temp = temp->proximo;
	}
	printf("Total de itens : %i \n", comprimento);
}



int main(int argc, char *argv[]) {
	item *fila = criafila(); 
	
	colocanafila(fila);
	colocanafila(fila);
	colocanafila(fila);
	total(fila);
	exibe(fila);
	tiradafila(fila);
	exibe(fila);
	tiradafila(fila); 
	exibe(fila);
	total(fila);
	return 0;
}
