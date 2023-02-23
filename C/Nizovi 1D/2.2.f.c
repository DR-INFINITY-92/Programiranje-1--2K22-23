#include<stdio.h>
#include<stdlib.h>
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
   
   void indeks_max_elementa_niza(int n,int a[n])
   {
       int i,min,min_i;
       min=a[0];
       min_i=0;
       for(i=1;i<n;i++)
       {
           if(a[i]<min)
           {
               min=a[i];
               min_i=i;
           }
       }
       printf("minimalni elemnt niza je %d i on ima indeks %d",a[min_i],min_i);
   }
void main()
{
    int n,i;
    broj_elemenata_niza(&n);
    int a[n];
    unos_niza(n,a);
    printf("elemenit polaznog niza su\n");
    ispis_niza(n,a);
    indeks_max_elementa_niza(n,a);
}