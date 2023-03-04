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

void odredjivanje_broj_elemenata_niza(int *n,int *broj)
{ 
    int m,brc=0;
    printf("unesi broj n\n");
    scanf("%d",broj);
    m=(*broj);
    while(m!=0)
    {
        brc++;
        m/=10;
    }
    *n=brc;
}

cifre_broja_u_niz(int broj, int n, int cifre[n])
{

    while(broj!=0)
    {
        cifre[n-1]=broj%10;
        broj/=10; 
        n--;
    }
}
sortiraj_niz_rastuce(int n, int cifre[n])
{
    int i,j,t;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(cifre[j]<cifre[i])
            {
                t=cifre[i];
                cifre[i]=cifre[j];
                cifre[j]=t;
            }
}
int izbaci_duplikate(int n, int cifre[n])
{
    int i,j,m,br=0;
    for(i=0;i<n-1;i++)  
    {
        if(cifre[i]==cifre[i+1])
        {
             for(j=i;j<n;j++)
                 cifre[j]=cifre[j+1];
            n--;
            i--;
                
        }   
    }
    return n;
}
void kopiraj_niz(int n, int cifre_kopija[n],int cifre[n])
{
    int i;
    for(i=0;i<n;i++)
    cifre_kopija[i]=cifre[i];
}
void prebroji_cifre_u_broju(int m, int n, int a[m],int cifre[m], int cifre_kopija[n])
{
    int i,j,br=0;  //n= 22133  cifre kopija 12233  cifre 123
    for(i=0;i<m;i++)
    {
         for(j=i;j<n;j++)
            if(cifre[i]==cifre_kopija[j])
                br++;
        a[i]=br;
        br=0;
    }
 
}
void ispis_pojavljivanja_cifara(int broj,int m,int a[m],int cifre[m])
{
    int i;
    for(i=0;i<m;i++)
    {
        printf("cifra %d u broju %d se pojavljuje %d puta",cifre[i],broj,a[i]);
        printf("\n");
    }
}

void main()
{
    int n,m,broj;
    odredjivanje_broj_elemenata_niza(&n,&broj);
    int cifre[n],cifre_kopija[n];
    cifre_broja_u_niz(broj,n,cifre);
    printf("elementi niza a:\n");
    ispis_niza(n,cifre);
    sortiraj_niz_rastuce(n,cifre);
    ispis_niza(n,cifre);
    kopiraj_niz(n,cifre_kopija,cifre);
    m=izbaci_duplikate(n,cifre);
    ispis_niza(m,cifre);
    int a[m];
    prebroji_cifre_u_broju(m,n,a,cifre,cifre_kopija);
    ispis_pojavljivanja_cifara(broj,m,a,cifre);
}


