#include<stdio.h>
#include<stdlib.h>
void unos_niza_i_suma(int n, int a[n],float *s)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("unesi %d. element niza\n",i+1);
        scanf("%d",&a[i]);
        if(i%2==0)
            *s=(*s)+a[i];
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
void main()
{
    int n,i;
    float s;
    broj_elemenata_niza(&n);
    int a[n];
    unos_niza_i_suma(n,a,&s);
    printf("elemenit polaznog niza su\n");
    ispis_niza(n,a);
    printf("suma elemnata niza sa parnim indeksom je niza je %f",s);
}