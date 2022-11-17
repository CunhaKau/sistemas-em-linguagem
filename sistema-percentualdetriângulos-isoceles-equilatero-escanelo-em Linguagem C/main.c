#include <stdio.h>
#include <stdlib.h>

/* 
3 – Crie um programa que armazene em uma matriz 10×3 
em cada uma das colunas armazene o tamanho de uma aresta de um triangulo, 
ao final exiba o percentual de triângulos isoceles, 
equiláteros e escalenos
*/

int main(int argc, char *argv[]) {
	float tri[10][3], perEsc=0, perIso=0, perEqu=0;
	int x, a=0, b=1, c=2;
	for(x=0; x<10; x++){
		printf("Informe aresta A do triangulo[%d]:", x);
		scanf("%f", &tri[x][a]);
		printf("Informe aresta B do triangulo[%d]:", x);
		scanf("%f", &tri[x][b]);
		printf("Informe aresta C do triangulo[%d]:", x);
		scanf("%f", &tri[x][c]);
		
		if(tri[x][a]==tri[x][b] && tri[x][a]==tri[x][c]){
			perEqu++;	
		} else {
			if(tri[x][a]==tri[x][b] || tri[x][a]==tri[x][c] || tri[x][b]==tri[x][c] ){
				perIso++;
			} else {
				perEsc++;
			}			
		}				
	}	
	perEqu = (perEqu/10)*100;
	perIso = (perIso/10)*100;
	perEsc = (perEsc/10)*100;
	printf("Equilatero=%2.f porcento, Escaleno=%2.f porcento, Isoceles=%2.f porcento",perEqu,perEsc,perIso);
	
	return 0;
}
