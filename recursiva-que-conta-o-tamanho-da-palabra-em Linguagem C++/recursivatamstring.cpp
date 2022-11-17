#include <stdio.h>
#include <conio.h>

int tamstring
(char s[]){
 if (s[0] == '\0')
 return 0;
 return 1+tamstring(&s[1]);
 }

int main(){
 char s[20];
 int t;
 
 printf("\nDigite a string/palavra: ");
 scanf("%s", s);
 t=tamstring(s);
 printf("\n\nO tamanho da string eh %d", t);
 getch(); 
 }

