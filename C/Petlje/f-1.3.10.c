#include <stdio.h>

int main() {
  /* Deklaracija potrebne promenljive. */
  int n;

  /* Ucitavanje vrednosti broja n. */
  p:
  printf("Unesite broj: ");
  scanf("%d", &n);

  /* Slucaj kada broj n ima vrednost nula se posebno obradjuje.
     U suprotnom bi se petlja u nastavku beskonacno izvrsavala. */
  if (n == 0) {
    printf("pogresan unos \n");
    goto p;
  }

  /* Uklanjanje poslednje cifre broja se vrsi deljenjem broja sa 10.
     Ovaj postupak se ponavlja sve dok je poslednja cifra nula. */
  while (n % 10 == 0)
    n = n / 10;

  /* Ispis rezultata. */
  printf("Rezultat: %d\n", n);

  return 0;
}
