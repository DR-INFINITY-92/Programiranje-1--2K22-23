#include <stdio.h>
#include <stdlib.h>

int main() 
{
  /* Deklaracije potrebnih promenljivih. */
  int n, i;
  float x, r=1;

  /* Ucitavanje vrednosti brojeva x i n. trazimo x^n*/
  printf("Unesite redom brojeve x i n:\n");
  scanf("%f %d", &x, &n);
  
  /* Racunanje vrednosti x^n. */
  for (i = 0; i < abs(n); i++)
    r = r * x;

  if (n<0)
    printf("Rezultat: %.3f\n", 1 / r);
  else
    printf("Rezultat: %.3f\n", r);

  return 0;
}
