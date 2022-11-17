#include <stdio.h>
#include <stdlib.h>
/* 
int x = 10;
while(x>0)
{
  prinf("%d",x);
  x--;
}
a- reescreva com o laço faça até (for)
b- reescreva com o laço faça enquanto (do while)
*/

int main(int argc, char *argv[]) {
	int x;
	for(x=10;x>0;x--){
		printf("%d\n",x);	
	}
	x=10;
	do
	{
		printf("%d\n",x);	
		x--; // x = x - 1
	} while(x>0);
	
	return 0;
}
