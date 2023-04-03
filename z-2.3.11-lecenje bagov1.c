#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void kopiraj(int n, char s[n], char t[3*n])
{
    int i;
    for(i=0;i<n;i++)
        t[i]=s[i];
}

int main() {
  char s[30];
  int n;
  printf("Unesite nisku:\n");
  scanf("%s", s);
  n=strlen(s);
  char t[3*n];
  kopiraj(n,s,t);

   printf("Rezultat s=: %s\n", s);
    strcat(t,s);
    strcat(t,s);
    t[(3*n)]='\0';
  printf("Rezultat t=: %s\n", t);
}
