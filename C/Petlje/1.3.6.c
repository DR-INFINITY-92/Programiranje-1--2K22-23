#include <stdio.h>

int main() 
{
  /* Deklaracije potrebnih promenljivih. */
  int n, i;
  float x, stepen=1;

  /* Ucitavanje vrednosti brojeva x i n. */
  p:
  printf("Unesite redom brojeve x i n: ");
  scanf("%f %d", &x, &n);

  /* Provera ispravnosti ulaza. */
  if (n < 0) {
    printf("Greska: neispravan unos broja n.\n");
    goto p;
  }


  for (i = 0; i < n; i++)
    stepen = stepen * x;

  /* Ispis rezultata. */
  printf("Rezultat: %.5f\n", rezultat);

  return 0;
}
