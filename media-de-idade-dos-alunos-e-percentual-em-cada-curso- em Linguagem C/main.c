#include <stdio.h>
#include <stdlib.h>

/* 
1- Crie um programa que controle uma lista de inscritos 
.em um vestibular, armazene em uma matriz 10×3 os seguintes dados:
 primeira coluna : cpf do inscrito , 
 segunda coluna: idade do inscrito, 
 terceira coluna: curso escolhido 1-ADS 2-GECOM 3-Eventos 4-RH

somente insira a linha da matriz caso o CPF não tenha sido
cadastrado anteriormente
Exiba ao  final a quantidade de inscritos de cada curso
Mostre a media de idade dos inscritos
Caso ja exista um cpf, mostre a mensagem CPF ja cadastrado 
registro não inserido
*/

int main(int argc, char *argv[]) {
	int vestibular[10][3];
	int x, y, cpf, cpfJaExiste;
	float mediaIdade = 0;
	float percADS=0, percGECOM=0, percEventos=0, percRH=0;
	
	for(x=0; x<10; x++){
		do{ //1 a N 
			cpfJaExiste = 0;
			printf("Informe o Cpf: ");
			scanf("%d", &cpf);
			for(y=0; y<x; y++){
				if(cpf == vestibular[y][0]){
					printf("Cpf ja existe ! \n");
					cpfJaExiste = 1;							
					break;
				}
			}
		} while(cpfJaExiste==1);
		vestibular[x][0] = cpf;
		printf("Informe sua idade:");
		scanf("%d", &vestibular[x][1]);
		mediaIdade += vestibular[x][1];
		printf("Informe o curso 1-ADS 2-GECOM 3-Eventos 4-RH:");
		scanf("%d", &vestibular[x][2]);
		
		switch(vestibular[x][2]){
			case 1:
				percADS++;
				break;
			case 2:	
				percGECOM++;
				break;
			case 3:					
				percEventos++;
				break;
			case 4:	
				percRH++;
				break;
			default:
				printf("Curso Invalido !");	
		}		 
	}
	mediaIdade = mediaIdade/10;
	percADS 	= (percADS /10)*100;				
	percGECOM	= (percGECOM/10)*100;
	percEventos = (percEventos/10)*100;				
	percRH		= (percRH/10)*100;
	printf("Media de idade %2.f \n", mediaIdade);
	printf("ADS = %2.f porcento\n", percADS);		
	printf("GECOM = %2.f porcento\n", percGECOM);		
	printf("Eventos = %2.f porcento\n", percEventos);		
	printf("RH = %2.f porcento\n", percRH);		
	
	return 0;
}
