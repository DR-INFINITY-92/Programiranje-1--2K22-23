#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void unos_niza(int n, int a[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("unesi %d. element niza\n",i+1);
        scanf("%d",&a[i]);
    }
}

void ispis_niza(int n, int a[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void broj_elemenata_niza(int *n)
{ 
    printf("unesi koliko elemenata ima niz\n");
    scanf("%d",n);
}
   
void sortiraj_niz_rastuce(int n,int a[n])
{
    int i,j;
    float t;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}
void prvi_i_poslednji(int n,int a[n])
{
    int i,poslednji_pozivitivni=n-1,prvi_pozitivni=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            prvi_pozitivni=i;
            break;
        }
    }
    if((a[poslednji_pozivitivni]>=0) && (a[prvi_pozitivni]>=0))
          printf("prvi pozitivni element ima indeks %d i on je %d, a poslednji pozitivni element u nizu je %d i on je %d",prvi_pozitivni,a[prvi_pozitivni],n-1,a[n-1]);
    if(a[poslednji_pozivitivni]<0 || a[prvi_pozitivni]<0)
          printf("niz nema prvi i poslednji pozitivni");
    printf("\n");
}
void main()
{
    int n,i;
    float as;
    broj_elemenata_niza(&n);
    int a[n];
    unos_niza(n,a);
    printf("elemenit polaznog niza su\n");
    ispis_niza(n,a);
    sortiraj_niz_rastuce(n,a);
    printf("elemenit polaznog niza nakon sortiranja u rastucem poretku su\n");
    ispis_niza(n,a);
    prvi_i_poslednji(n,a);

}