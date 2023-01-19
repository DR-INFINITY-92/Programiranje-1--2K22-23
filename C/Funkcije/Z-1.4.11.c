#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int sadrzi(int n,int c)
{
    int indikator =0;
    n=abs(n);
    while(n!=0)
    {
        if(n%10==c)
        {
            indikator=1;
            break;
        }
        n=n/10;
    }
    if(indikator==0)
        return 0;
    else 
        return 1;
}
int main ()
{
    int n,c,i;
    printf("unesi ceo broj n\n");
    scanf("%d",&n);
    p:
    printf("unesi cifru koju zelih da ispitas da li postoji u zapisu broj od 0-9 n\n");
    scanf("%d",&c);
    if(c<0 || c>9)
        goto p;
    i=sadrzi(n,c);
    if(i==1)
        printf("broj %d u svom zapisu sadrzi cifreu %d",n,c);
    else 
        printf("broj %d u svom zapisu ne sadrzi cifreu %d",n,c);
    return 0;
}