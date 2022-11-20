#include <stdio.h>
#include <stdlib.h>

int main() {
  /* Deklaracije potrebnih promenljivih. */
    int k,n,j,d,s;
    p:
  /* Ucitavanje vrednosti celog broja n. */
    printf("Unesi pozitivan trocifreni broj n:\n");
    scanf("%d",&n);

  /* Provera ispravnosti ulaznih podataka. Ovde proveravamo da li je uneti broj n trocifren */
    if (n < 100 || n > 999) 
    {
        printf("Greska: niste uneli pozitivan trocifreni broj.\n");
        goto p;
    }
    k=n;
  /* Izdvajanje cifara broja n. */
    j=n%10;
    n=n/10;
    d=n%10;
    n=n/10;
    s=n;
  /* Ispis rezultata. */
    if (k==j*j*j+d*d*d+s*s*s)
        printf("Broj %d je Armstrongov broj.\n",k);
    else
        printf("Broj %d nije Armstrongov broj.\n",k);

  return 0;
}