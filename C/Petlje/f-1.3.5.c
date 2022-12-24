#include <stdio.h>

int main() {
  // Učitavanje vrednosti n
  int n;
  printf("Unesite nenegativan ceo broj n: ");
  scanf("%d", &n);

  // Provera da li je unos ispravan
  if (n < 0) {
    printf("Greska: Uneti broj n mora biti nenegativan.\n");
    return 1;
  }

  // Izračunavanje faktorijela
  int faktorijel = 1;
  for (int i = 2; i <= n; i++) {
    faktorijel *= i;
  }

  // Ispisivanje rezultata
  printf("Faktorijel broja n: %d\n", faktorijel);

  return 0;
}
