#include <stdio.h>

int main() {
 
   float x,rezultat = 1;
  int n;
   // Učitavanje vrednosti x i n
  printf("Unesite realan broj x i ceo nenegativan broj n: ");
  scanf("%lf%d", &x, &n);

  // Provera da li je unos ispravan
  if (n < 0) {
    printf("Greska: Uneti broj n mora biti nenegativan.\n");
    return 1;
  }

  // Izračunavanje n-tog stepena broja x
 
  for (int i = 0; i < n; i++) {
    rezultat *= x;
  }

  // Ispisivanje rezultata
  printf("%f na %d: %f\n", x, n, rezultat);

  return 0;
}
