#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int unos_niza_a_i_odredjivanje_broja_elemenata_niza_b(int n, int a[n])
{
    int i,brnc=0;
    for(i=0;i<n;i++)
    {
        printf("unesi %d. element niza\n",i+1);
        scanf("%d",&a[i]);
        if(a[i]<0)
            brnc++;
    }
    return n-brnc;
}

void ispis_niza(int n, int a[n])
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}

void broj_elemenata_niza(int *n)
{ 
    printf("unesi koliko elemenata ima niz\n");
    scanf("%d",n);
}
void kreiranje_niza_b(int n, int a[n],int b[n])
{
    int i,j=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            b[j]=a[i];
            j++;
        }
    }
}

void main()
{
    int n,m;
    broj_elemenata_niza(&n);
    int a[n];
    m=unos_niza_a_i_odredjivanje_broja_elemenata_niza_b(n,a);
    printf("elementi niza a:\n");
    ispis_niza(n,a);
    int b[m];
    kreiranje_niza_b(n,a,b);
    printf("elementi niza b:\n");
    ispis_niza(m,b);
}


