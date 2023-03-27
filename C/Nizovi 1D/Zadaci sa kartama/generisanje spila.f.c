#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void unos_karata_spila(int n,int spil[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("unesi kartu ceo broj od 1 - 14\n");
        scanf("%d",&spil[i]);
        if(spil[i]<1 || spil[i]>14)
        {
            printf("vredsnost karte nije ispravna unesi opet\n");
            i--;
        }
    }
}
void ispis_niza(int n, int a[n])
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}

void  broj_karata_u_spilu(int *n)
{ 
    p:
    printf("unesi koliko karata zelis da ima u spilu\n");
    scanf("%d",n);
    if(*n%2!=0)
    {
        printf("greska broj karata mora biti paran broj\n");
        goto p;
    }
}

void main()
{
    int n;
    broj_karata_u_spilu(&n);
    int spil[n];
    unos_karata_spila(n,spil);
    printf("karte koje su u spilu su:\n");
    ispis_niza(n,spil);
}


