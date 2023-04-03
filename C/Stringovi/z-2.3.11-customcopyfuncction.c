#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void strcat1(int n, char s[n], char t[3*n])
{
    int i,j=0,m;
    m=3*n;
    for(i=0;i<m;i++)
    {
        t[i]=s[j];
        j++;
        if(j==n)
            j=0;
    }
        t[(3*n)]='\0';
}

int main() {
  char s[30];
  int n;
  printf("Unesite nisku:\n");
  scanf("%s", s);
  n=strlen(s);
  char t[3*n];
strcat1(n,s,t);
   printf("Rezultat s=: %s\n", s);
  printf("\n Rezultat t=: %s\n", t);
}
