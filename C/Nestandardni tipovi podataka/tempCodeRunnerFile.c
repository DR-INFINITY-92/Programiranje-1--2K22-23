// Another example program to demonstrate working
// of enum in C
#include<stdio.h>

typedef struct 
{
    char pol;
    char ime[10];
    char prezime[10];
    int godine;
    double visina;
    double masa;
}osoba;

int main()
{
    osoba O1;
    printf("unesi ime osobe\n");
    scanf("%s", &O1.ime);
    printf("unesi prezime osobe\n");
    scanf("%s", &O1.prezime);
    printf("unesi godine osobe\n");
    scanf("%d", &O1.godine);
    printf("unesi visinu osobe\n");
    scanf("%lf", &O1.visina);
    printf("unesi masu osobe\n");
    scanf("%lf", &O1.masa);
    printf("podaci o osobi sa imenom %s i preziomeno %s su:\n",O1.ime,O1.prezime);
    printf("godine:%d\n",O1.godine);
    printf("visina:%lf\n",O1.visina);
    printf("masa:%lf\n",O1.masa);


    return 0;
}
