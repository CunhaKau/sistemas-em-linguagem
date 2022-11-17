#include <stdio.h>
#include <stdlib.h>

/* 
1 – Construa um programa em C que utilize uma matriz 10×3 
que armazene as  temperaturas máxima e minima do dia, 
assim como a media de temperatura na ultima coluna.  
Crie um menu de escolha que ofereça as seguintes informações:

temperatura minima de todos os dias.
temperatura máxima de todos os dias.
maior variação de temperatura de todos os dias.
Sair do programa.
*/

int main(int argc, char *argv[]) {
	float temp[10][3];
	float min, max, var, varMax;
	int x, op;
	for(x=0; x<10; x++){
		printf("Informe a temp. minima do dia [%d]=", x);
		scanf("%f", &temp[x][0]);
		printf("Informe a temp. maxima do dia [%d]=", x);
		scanf("%f", &temp[x][1]);
		temp[x][2] = (temp[x][0]+temp[x][1])/2;			
		var = (temp[x][1] - temp[x][0]);
		if(x==0){
			min = temp[x][0];
			max = temp[x][1]; 		
			varMax = var;
		} else {
			if(temp[x][0] < min) min = temp[x][0];
			if(temp[x][1] > max) max = temp[x][1];
			if(var > varMax) varMax = max;
		}
	}
	do{		
	    printf("\nSelecione uma das opcoes abaixo:\n");
		printf("1-temperatura minima de todos os dias.\n");
		printf("2-temperatura maxima de todos os dias.\n");
		printf("3-maior variacao de temperatura de todos os dias.\n");
		printf("4-Sair do programa.\n");
		scanf("%d", &op);
		system("cls");
		switch(op){
			case 1:{
				printf("A menor temp. foi %2.f \n", min);	
				break;
			}
			case 2:{
				printf("A maior temp. foi %2.f \n", max);	
				break;
			}	
			case 3:{
				printf("A maior variacao foi %2.f \n", varMax);	
				break;
			}
			default :{
				break;
			}
		}		
	} while(op!=4); 
	return 0;
}
