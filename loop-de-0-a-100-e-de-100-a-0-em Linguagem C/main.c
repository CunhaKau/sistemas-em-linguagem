#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("contagem de 0 a 100\n");
	int x,y;
	//faça ate - x a Y repetições	
	for(x=0;x<=100;x++){
		printf("%d ",x);
	}
	printf("\n\ncontagem de 100 a 0");
	printf("\n");
	for(y=100;y>=0;y--){
		printf("%d ",y);
	}
	return 0;
	
}
