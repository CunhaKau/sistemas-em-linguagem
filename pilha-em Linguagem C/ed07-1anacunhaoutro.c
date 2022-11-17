#include <stdio.h>
#include <stdlib.h>

struct texto {
 char letras[100];
 struct texto *proximo;  //endereço do proximo item abaixo da pilha
};
typedef struct texto Item;

struct {
 	Item *topo;  //endereco do topo da pilha
} typedef Pilha;

Pilha *criar()
{
	Pilha *p= (Pilha*)malloc(sizeof(Pilha));
	//Pilha *p = (Pilha*)malloc(sizeof(Pilha));
 	p->topo = NULL;
 	return p;
}

void push(Pilha *p)
{
    Item *novo = (Item*)malloc(sizeof(Item));
    printf("Escreva um texto: ");
	gets(novo->letras);
    novo->proximo = p->topo;
 	p->topo = novo;
}


void imprime(Pilha *p)
{
		Item *temp = p->topo;
		while(temp != NULL){
		printf("\n Ordem pilha\n Item %x %s \n", temp, temp->letras);
		temp = temp->proximo;
		printf("\n inverso dessa pilha\n Item %x %s \n", temp, temp->letras);
	}
}




int main()
{
   Pilha *p = criar();
   push(p);
   push(p);
   push(p);
   imprime(p);   
   return 0;
}
