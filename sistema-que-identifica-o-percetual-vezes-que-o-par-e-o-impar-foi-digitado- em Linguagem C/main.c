#include <stdio.h>
#include <stdlib.h>

/* 
Fa�a um algoritmo que armazene um vetor de inteiros 
de 20 posi��es, identifique  o percentual de n�meros 
impares e de n�meros pares informados.
*/

int main(int argc, char *argv[]) {
	float percPar=0, percImpar=0;
	int numeros[20];
	int x, resto;
	for(x=0; x<20; x++){
		printf("Informe um valor para pos %d=",x);
		scanf("%d", &numeros[x]);
		resto = numeros[x] % 2;
		if(resto == 0){
			percPar++; //percPar= percPar+1
		} else {
			percImpar++;
		}		
	}
	percPar = (percPar/20) * 100;
	percImpar =  (percImpar/20) * 100;
	printf("pares=%2.f porcento, impares=%2.f porcento",percPar, percImpar  );
	
	
	return 0;
}
