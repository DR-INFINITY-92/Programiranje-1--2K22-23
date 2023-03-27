#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void ispis_niza(int n, int a[n])
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}

void odredjivanje_broj_elemenata_niza(int *n)
{ 
    int m,brc=0;
    printf("unesi broj n\n");
    scanf("%d",n);
}


void sortiraj_niz_rastuce(int n, int a[n])
{
    int i,j,t;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(a[j]<a[i])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
}
int izbaci_duplikate(int n, int a[n])
{
    int i,j,m,br=0;
    for(i=0;i<n-1;i++)  
    {
        if(a[i]==a[i+1])
        {
             for(j=i;j<n;j++)
                 a[j]=a[j+1];
            n--;
            i--;
                
        }   
    }
    return n;
}

void unos_niza(int n, int a[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("unesi %d. element niza\n",i);
        scanf("%d",&a[i]);
    }
}


void main()
{
    int n,m;
    odredjivanje_broj_elemenata_niza(&n);
    int a[n];
    unos_niza(n,a);
    printf("niza a pre sortiranja u rastucem poretku\n");
    ispis_niza(n,a);
     printf("niza a posle sortiranja u rastucem poretku\n");
    sortiraj_niz_rastuce(n,a);
    ispis_niza(n,a);
    printf("niza a nakon izbacivanje duplikata u\n");
    m=izbaci_duplikate(n,a);
    ispis_niza(m,a);
  
}

