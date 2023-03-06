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
    printf("unesi koliko karata zelis da ima u spilu\n");
    scanf("%d",n);
}
void podeli_karte_igracima(int n,int m,int spil[n],int igrac1k[m],int igrac2k[m])
{
    int i,j=0;
    for(i=0;i<n-1;i++)
    {
        igrac1k[j]=spil[i];
        igrac2k[j]=spil[i+1];
        j++;
        i++;
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
    int m=n/2;
    int igrac1k[m],igrac2k[m];
    podeli_karte_igracima(n,m,spil,igrac1k,igrac2k);
    printf("karte prvog igraca su:\n");
    ispis_niza(m,igrac1k);
    printf("karte drugog igraca su:\n");
    ispis_niza(m,igrac2k);

  

}


