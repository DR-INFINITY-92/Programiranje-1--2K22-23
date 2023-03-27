#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main()
{
    // Duzina stranice kvadrata
 
    unsigned long long a = RAND_MAX;
 
    if (RAND_MAX & 1) // Ukoliko je A neparno
        a--;
 
    // Poluprecnik kruga
 
    unsigned long long r = a/2;
 
    // Brojac tacaka u krugu
 
    unsigned long long pogodaka = 0;
 
    // Broj iteracija algoritma, tj. ukupan broj tacaka
 
    unsigned long long n;
 
    // Seed za random generator
 
    srand(time(0));
 
    // Ucitavamo broj iteracija
 
    printf("Uneti broj iteracija: ");
    scanf("%lld", &n);
 
    // Izvrsavamo algoritam
 
    unsigned long long x, y;
    unsigned long long rr = r*r;
 
    unsigned long long i;
    for (i = 1; i <= n; i++)
    {
        x = rand();
        y = rand();
 
        if (x > a || y > a) // Da ne bismo dobijali tacke van kvadrata
        {
            i--; // Ponavljamo iteraciju
            continue;
        }
 
        if ((x-r)*(x-r) + (y-r)*(y-r) <= rr) // Jednacina kruga
            pogodaka++;
    }
 
    // Ispisujemo dobijenu vrednost
 
    double pi = 4 * (double)pogodaka / n;
 
    printf("Aproksimacija broja Pi: %lf\n", pi);
 
    return 0;
}
