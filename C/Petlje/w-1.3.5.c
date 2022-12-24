#include <stdio.h>

int main() {
  // Ucitavanje vrednosti n
  int n;
  p:
  printf("Unesite nenegativan ceo broj n: ");
  scanf("%d", &n);

  // Provera da li je unos ispravan
  if (n < 0) {
    printf("Greska: Uneti broj n mora biti nenegativan.\n");
	goto p;
  }

  // Izracunavanje faktorijela
  int faktorijel = 1;
  int i = 2;
  while (i <= n) {
    faktorijel *= i;
    i++;
  }

  // Ispisivanje rezultata
  printf("Faktorijel broja n: %d\n", faktorijel);

  return 0;
}
