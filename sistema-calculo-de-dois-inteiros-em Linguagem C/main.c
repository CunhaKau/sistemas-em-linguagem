#include <stdio.h>
#include <stdlib.h>

/* Sistema que soma,subtrai, multiplica e divide dois números inteiros  */

int main(int argc, char *argv[]) {
	float a,b, resultado;
	int op;
	
	printf("1-soma\n2-subtrair\n3-multiplicar\n4-dividir\nEscolha a operacao:");
	scanf("%d",&op);
	printf("Informe um valor a:");
	scanf("%f",&a);
	printf("Informe um valor b:");
	scanf("%f",&b);
	//comando escolha so aceita inteiro ou caracter
	switch(op){
		case 1 : {
			resultado = a + b;
			break;
		} 
		case 2 :{
			resultado = a - b;
			break;
		}
		case 3 :{
			resultado = a * b;
			break;
		}
		case 4 :{
			resultado = a / b;
			break;
		}
		default :{
			resultado = 0;	
		}		
	}
	printf("O resultado = %2.f", resultado);
	return 0;
}
