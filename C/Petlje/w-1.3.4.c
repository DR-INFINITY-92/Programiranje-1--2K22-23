#include <stdio.h>

int main() {
  // Učitavanje vrednosti n i m
  int n, m;
  printf("Unesite dva cela broja n i m (n <= m): ");
  scanf("%d%d", &n, &m);

  // Ispisivanje svih cele brojeva u intervalu [n, m]
  printf("Cele brojevi u intervalu [n, m]: ");
  while (n <= m) {
    printf("%d ", i);
    n++;
  }
  printf("\n");

  return 0;
}
