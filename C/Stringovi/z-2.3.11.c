#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main() {
  char s[30];
  int n,i;
  printf("Unesite nisku:\n");
  scanf("%s", s);
  n=strlen(s);
  char t[3*n];
   for(i=0;i<3;i++)
      strcat(t,s);
  printf("Rezultat: %s\n", t);
}
