#include <stdio.h>
#include <conio.h>

int caracter(char c,char s[]){
 if (s[0] == '\0')
 return 0;
 if (s[0]==c) return (1+caracter(c,++s));
 return caracter(c,++s);
}

int main(){
 char s[30],c;
 int t;
 
 printf("\nDigite a string/palavra: ");
 gets(s);
 printf("\nDigite o caractere que deseja buscar: ");
 c=getchar();
 t=caracter(c,s);
 printf("\n\nO caractere aparece %d vezes na string que foi digitada", t);
 getch();
}

