#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void ukloni_slova(int n, char s[n]) {
  int i, j=0;
  for (i = 0; i<=n; i++)
    if (!isalpha(s[i])) {
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
