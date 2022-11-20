#include <stdio.h>
#include <stdlib.h>

int main() {
  /* Deklaracije i inicijalizacija potrebnih promenljivih. */
  int n,bp=0,pp=1,j,d,s,h;

  /* Ucitavanje vrednosti broja n. */
  p:
  printf("Unesite cetvorocifreni broj:\n");
  scanf("%d", &n);
  n = abs(n);

  /* Provera ispravnosti ulaznih podataka. tj da li je uneti broj n cetvorocifren */
    if (n < 1000 || n > 9999) 
    {
        printf("Greska: niste uneli cetvorocifreni broj.\n");
        goto p;
    }

  /* Izdvajanje cifara broja n. */
    j=n%10;
    d=(n/10)%10;
    s=(n/100)%10;
    h=n/1000;

  /* Za svaku cifru se vrsi provera da li je parna i ukoliko jeste
     tekuca vrednost promenljive pp se mnozi tekucom cifrom. */
    if (j%2==0)
    {
        pp=pp*j;
        bp++;
    }
    if (d%2==0)
    {
        pp=pp*d;
        bp++;
    }
    if (s%2==0)
    {
        pp=pp*s;
        bp++;
    }
    if (h%2==0)
    {
        pp=pp*h;
        bp++;
    }

  if (bp==0)
    printf("Nema parnih cifara.\n");
  else
    printf("Proizvod parnih cifara: %d\n", pp);

  return 0;
}