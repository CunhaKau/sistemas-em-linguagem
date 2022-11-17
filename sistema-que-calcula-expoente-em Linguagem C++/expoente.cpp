#include <stdio.h>
#include <conio.h>

int exp
(int x, int y)
{
 if (y == 0)
 return 1;
 if (y == 1)
 return x;
 return x*exp(x,y-1);
}

int main() {
int x, y, e;
 
 printf("\nDigite o valor inteiro para x que eh a base:");
 scanf("%d", &x);
 printf("\nDigite o valor inteiro para y que eh o expoente:");
 scanf("%d", &y);
 if (y < 0) {
 printf("\n\n Atencao y nao pode ser negativo!");
 getch(); }
 else
{
 e=exp(x,y);
 printf("\n\nX elevado a y eh: %d", e);
 getch();}}

