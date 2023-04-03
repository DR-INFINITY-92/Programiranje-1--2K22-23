#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void strcat1(int k,int n, int o, char s[n], char t[o])
{
    int i;
    char s2[1];
    s2[0]='-';
    t[0]='\0';
    for(i=0;i<k;i++)
    {
        strcat(t,s);
        if(i<k-1)
            strcat(t,s2);
    }
   
}

int main() {
  char s[30];
  int n,o,k;
  printf("Unesite nisku:\n");
  scanf("%s", s);
  printf("Unesite broj kopiranja:\n");
  scanf("%d",&k);
  n=strlen(s);
  o=(k*n)+(k-1);
  char t[o];
strcat1(k,n,o,s,t);
printf("Rezultat s=: %s\n", s);
printf("\n Rezultat t=: %s\n", t);
}
