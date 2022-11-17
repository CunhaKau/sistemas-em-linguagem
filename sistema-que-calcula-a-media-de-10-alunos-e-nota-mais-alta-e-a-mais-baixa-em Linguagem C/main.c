#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float medias[10];
	float media = 0; 
	float maior, menor;
	int cont;
	int mediasAcima=0;
	
	for(cont=0;cont<10; cont++){
		printf("Informe uma nota:");
		scanf("%f", &medias[cont]);	
		media = media + medias[cont]; 
	}
	media = media / 10;
	for(cont=0;cont<10; cont++){
		if(medias[cont] > media){
			mediasAcima++;		
		}
		if(cont==0){
			menor= medias[cont];
			maior= medias[cont];
		} else {
			if(medias[cont] < menor){
				menor = medias[cont]; 	
			}	
			if(medias[cont] > maior){
				maior = medias[cont]; 	
			}
		}			
	}
	
	
	printf("Media da Sala=%f, Acima da Media=%d \n", media, mediasAcima); 
	printf("Maior Nota=%f, Menor Nota=%f \n", maior, menor);
	
	
	return 0;
}
