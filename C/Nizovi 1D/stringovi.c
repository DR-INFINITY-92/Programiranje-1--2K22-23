#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void unos_niza(int n, char a[n])
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("unesi %d. element niza\n", i + 1);
        scanf(" %c", &a[i]);
    }
}

void ispis_niza(int n, char a[n])
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("a[%d]=%c ", i, a[i]);
    }
    printf("\n");
}
void main()
{
    int n, i;
    char ime[10], prezime[16],sifra[10];
    p:
    printf("unesi sifru\n");
    scanf("%s", &ime);
    if(strcmp("jovan",ime)==0)
       {
        int a[10];
        unos_niza(10,a);
        ispis_niza(10,a);
       }
    else
        {
            printf("acces denied wrong passwod\n");
            goto p;
        }
}