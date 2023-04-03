#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void ukloni_slova(int n, char s[n]) {
  int i, j=0;
  for (i = 0; i<=n; i++)
    if ((s[i]>65 && s[i]<90)||(s[i]>96 && s[i]<122)){
     
    }
    else
    {
      s[j] = s[i];
      j++;
    }
  s[j] = '\0';
}

int main() {
  char s[20];
  int n;
  printf("Unesite nisku:\n");
  scanf("%s", s);
  n=strlen(s);
  ukloni_slova(n,s);
  printf("Rezultat: %s\n", s);
}
