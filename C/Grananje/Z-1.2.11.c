#include <stdio.h>
#include <stdlib.h>int main() {
    int n,j,d,s,h,max;
    p:
    printf("Unesite cetvorocifreni broj:\n");
    scanf("%d",&n);
  /* Da bi program radio ispravno i za negativne brojeve, koristitit apsolutnu vrednost broja n. zanimaju nas cifre*/
    n = abs(n);
  /* Provera da li je uneti broj n cetvorocifren */
    if (n < 1000 || n > 9999) 
    {
        printf("Greska: niste uneli cetvorocifreni broj.\n");
        goto p;
    }
  /* Izdvajanje cifara broja n. */
  j=n%10;
  n=n/10;
  d=n%10;
  n=n/10;
  s=n%10;
  n=n/10;
  h=n;
  /* Racunanje najvece cifra broja n. */
    if(h>s && h>d && h>j)
        max=h;
    else 
        if(s>h && s>d && s>j)
            max=s;
        else
            if(d>h && d>s && d>j)
                max=d;
            else
                max=j;
  /* Ispis rezultata. */
  printf("Najveca cifra unetog broja n je: %d\n", max);
  return 0;
}