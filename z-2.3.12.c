#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void strcat1(int n, int o, char s[n], char t[o])
{
    int i,j=0,m;
    for(i=0;i<o;i++)
    {
        t[i]=s[j];
        j++;
        if(j==n)
        {
            j=0;
            t[i+1]='-';
            i++;
        }   
    }
        t[(o)]='\0';
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
    strcat1(n,o,s,t);
   printf("Rezultat s=: %s\n", s);
  printf("\n Rezultat t=: %s\n", t);
}
