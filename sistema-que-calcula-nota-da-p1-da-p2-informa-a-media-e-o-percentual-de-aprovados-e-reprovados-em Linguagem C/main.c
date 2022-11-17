#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float notas[10][3];
	int p1 = 0;
	int p2 = 1;
	int m  = 2;
	int c;
	float a = 0;
	float r = 0;
	
	for(c=0; c<10; c++){
		printf("Aluno %d Informe a nota p1:", c);	
		scanf("%f", &notas[c][p1]);
		
		printf("Aluno %d Informe a nota p2:", c);	
		scanf("%f", &notas[c][p2]);
		
		notas[c][m] = (notas[c][p1] + notas[c][p2])/2;	
		printf("Media= %f \n\n", notas[c][m]);	
	}
	
	for(c=0; c<10; c++){
		if(notas[c][2] >= 6){
			a++;	
		} else {
			r++;
		}			
	}
	a = (a / 10) * 100;
	r = (r / 10) * 100;
	printf("Aprovados=%2.f porcento , Reprovados=%2.f porcento\n", a, r);
	
	
	return 0;
}
