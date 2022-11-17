
//C�digo Base para o Mini-Projeto Agenda de Amigos

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>
#include <stdlib.h>

struct ficha{
	char nome[40];
	char telefone[20];
	char endereco[50];
	char email[20];
	char dtnascimento[10];
	
};

int main()
{
	struct ficha agenda[100];
	int fichas_existentes = 0, proxima = 0;
	char opcao[10]="0";
        setlocale(LC_ALL, "Portuguese");

	while(opcao[0] != '5')
	{

		printf("\nEntre com a op��o desejada:\n");
		printf("\n1) Inserir ficha:");
		printf("\n2) Procurar por nome:");
		printf("\n3) Listar toda a base:");
		printf("\n4) Excluir por nome:");
		printf("\n5) Sair\n\n");
		gets(opcao);

		if(opcao[0] == '1') //inserir
		{
			printf("\nEntre com um nome:");
			gets(agenda[proxima].nome);
			printf("\nEntre com um telefone:");
			gets(agenda[proxima].telefone);
			printf("\nEntre com o endereco:");
			gets(agenda[proxima].endereco);
			printf("\nEntre com o email:");
			gets(agenda[proxima].email);
			printf("\nEntre com a data de nascimento:");
			gets(agenda[proxima].dtnascimento);
			fichas_existentes++;
			proxima++;
		}
		if(opcao[0] == '2') //procurar
		{
			char procurado[40];
			printf("\nEntre com o nome procurado:");
			gets(procurado);

			bool achei = false; //nao achei
			int i;
			for(i=0; i<fichas_existentes; i++)
			{
			  //Ignorando Maiusculas/Minusculas:
			  //if(strcasecmp(procurado, agenda[i].nome) == 0)
			  if(strcmp(procurado, agenda[i].nome) == 0)
			  {
			    achei = true; //achei!!
			    printf("\n\nO telefone de %s � %s\n, o endereco � %s, o email � %s e a data de nascimento � %s",
			      agenda[i].nome, agenda[i].telefone,agenda[i].endereco, agenda[i].email, agenda[i].dtnascimento);
			    //depois de achar nao preciso procurar mais
			    break;
			  }
			}
			if(achei == false)
			{
			  printf("\n\nNome n�o encontrado\n");
			}
		}
		if(opcao[0] == '3') //listar tudo
		{
			printf("\n\n");
			int i;
			for(i=0; i<fichas_existentes; i++)
			{
			    printf("\n\nO telefone de %s � %s\n, o endereco � %s, o email � %s e a data de nascimento � %s",
			      agenda[i].nome, agenda[i].telefone,agenda[i].endereco, agenda[i].email, agenda[i].dtnascimento);
			}
			if(fichas_existentes == 0)
				printf("A base de dados est� vazia!\n");
		}
		if(opcao[0] == '4') //excluir
		{
			char procurado[40];
			printf("\nEntre com o nome que sera exclu�do:");
			gets(procurado);

			bool achei = false; //nao achei
			int i;
			for(i=0; i<fichas_existentes; i++)
			{
			  //Ignorando Maiusculas/Minusculas:
			  //if(strcasecmp(procurado, agenda[i].nome) == 0)
			  if(strcmp(procurado, agenda[i].nome) == 0)
			  {
			    achei = true; //achei!!
			    printf("\n\nO telefone de %s, que � %s, ser� removido\n", agenda[i].nome, agenda[i].telefone);
			    int j;
			    for(j=i+1; j<fichas_existentes; j++)
			    {
					agenda[j-1] = agenda[j];
			    }
			    fichas_existentes--;
			    proxima--;
			    break;
			  }
			}
			if(achei == false)
			{
			  printf("\n\nNome n�o encontrado\n");
			}
		}
	}
	return 0;
}



