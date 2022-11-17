#include <stdio.h>
#include <stdlib.h>

/* 
2 – Armazene em uma matriz 10×5 o resultado de uma prova de alternativas:
a – coluna 0
b – coluna 1
c – coluna 2
d – coluna 3
e – coluna 4
Exemplo da resposta da primeira questão com a alternativa C:
prova[0][0]=0 ; 
prova[0][1]=0; 
prova[0][2]=1;
prova[0][3]=0;
prova[0][4]=0;
Com um gabarito já definido e armazenado em uma matriz, 
verifique a nota obtida pelo aluno
*/

int main(int argc, char *argv[]) {
	int gab[10][5], prova[10][5];
	int x,y, alt;
	int nota=0;
	
	for(x=0; x<10; x++){
		for(y=0;y<5;y++){
			gab[x][y] = 0;
			prova[x][y] = 0;	
		}
		printf("Informe gabarito questao[%d] 0-A,1-B,2-C,3-D,4-E,:", x);
		scanf("%d", &alt);
		gab[x][alt] = 1;
	}
	system("cls");
	for(x=0; x<10; x++){
		printf("Informe alternativa correta questao[%d] 0-A,1-B,2-C,3-D,4-E,:", x);
		scanf("%d", &alt);
		prova[x][alt] = 1;
		if(prova[x][alt]==gab[x][alt]) nota++;		
	}
	printf("Sua nota foi =%d \n", nota);
	printf("Gabarito\n==================\n");
	for(x=0; x<10; x++){
		printf("[%d] = ", x);
		for(y=0;y<5;y++){
			printf("%d ", gab[x][y]) ;			
		}
		printf("\n");
	}
	
	return 0;
}
