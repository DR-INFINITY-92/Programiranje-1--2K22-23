#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int sadrzi(int n,int c)
{
    n=abs(n);
    while(n!=0)
    {
        if(n%10==c)
            return 1;
        n=n/10;
    }
    return 0;
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
    if(sadrzi(n,c)==1)
        printf("broj %d u svom zapisu sadrzi cifru %d",n,c);
    else 
        printf("broj %d u svom zapisu ne sadrzi cifru %d",n,c);
    return 0;
}