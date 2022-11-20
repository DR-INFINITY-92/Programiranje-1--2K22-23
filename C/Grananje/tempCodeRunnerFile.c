#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() 
{
    int c1,c2,c3;

    /* Ucitavanje sifre artikla. za ucitavanje koristimo sada funkciju getchar() drugi nacin umesto pomocu scanf 
    ovde vodite racuna prilikom unosa unesite sve tri promenljive u jednom redu i onda enter jer ce u suprotnom 
    space ili eneter racunati kao uneti znak*/
    p:
    printf("Unesite sifru:");
    c1 = getchar();
    c2 = getchar();
    c3 = getchar();

    /*Funkcije islower, isupper i isdigit proveravaju da li je
     prosledjeni karakter malo slovo, veliko slovo ili cifra.
     Deklaracije ovih funkcija se nalaze u zaglavlju ctype.h.

     Ukoliko uneti karakter nije ni malo slovo ni veliko slovo, ni
     cifra, ispisuje se odgovarajuca poruka o gresci i vracamo korsnika na pocetak da unese karaktere opet.*/
    if (!islower(c1) && !isupper(c1) && !isdigit(c1)) 
    {
        printf("Greska: %c je neispravan karakter.\n", c1);
        goto p;
    }
    else
        if (!islower(c2) && !isupper(c2) && !isdigit(c2)) 
        {
            printf("Greska: %c je neispravan karakter.\n", c2);
            goto p;
        }
        else
            if (!islower(c3) && !isupper(c3) && !isdigit(c3)) 
            {
                printf("Greska: %c je neispravan karakter.\n", c3);
                goto p;
            }

  /* Funkcija tolower(c) radi sledece: ako je c veliko slovo, kao
     povratnu vrednost vraca odgovarajuce malo slovo, u suprotnom
     vraca c. Primer: tolower('A') je 'a', a tolower('9') je '9',
     tolower('k') je k, itd,

     SFunkcija toupper(c) radi sve slicno kao i tolower samo obrnuto. 
     Deklaracije ovih funkcija takodje se nalaze u zaglavlju ctype.h.*/
     c1 = tolower(c1);
     c2 = tolower(c2);
     c3 = tolower(c3);
     printf("sifra je: %c%c%c\n", c1, c2, c3);
     
     return 0;
}