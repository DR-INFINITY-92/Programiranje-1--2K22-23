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
   
void element_najblizi_as(float as,int n,int a[n])
{
       int i,mini;
       float minraz,r;
       minraz=fabs(as-a[0]);
       mini=0;
       for(i=1;i<n;i++)
       {
            r=fabs(as-a[i]);
             if(r<minraz)
                {
                    minraz=r;
                    mini=i;
                }
       }
      printf("aritmetickla sredina niza isnosi %.2f i najblizi element njoj je %d",as,a[mini]);
}
float aritmeticka_sredina_niza(int n,int a[n])
{
    int i;
    float s=0,as;
    for(i=0;i<n;i++)
        s+=a[i];
    as=s/n;
    return as;
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
    as=aritmeticka_sredina_niza(n,a);
    element_najblizi_as(as,n,a);
}