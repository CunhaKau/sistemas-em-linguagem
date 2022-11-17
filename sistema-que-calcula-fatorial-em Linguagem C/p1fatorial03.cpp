#include<stdio.h>
int fatorialrec(int num)
{
  if (num == 0) {
    return 1;
  }
  else {
    return num * fatorialrec(num-1);
  }
}
int main() {
  int num;
 double f;
 printf("Digite o numero que deseja calcular o fatorial: ");
  scanf("%d",&num);
  printf("\nfatR(%d) = %d", num, fatorialrec(num));
 }

int fatorialsemrec(int num)
{
  int f, i;
  if (num == 0) {
    return 1;
  }
  else {
   f = 1;
   for(i= num; i > 1; i--){
     f = f * i;
   }     
    return f; 
  }
}

