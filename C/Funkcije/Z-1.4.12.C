#include<stdio.h>
#include<stdlib.h>
int broj_neparnih(int x)
{
    int bnc=0;
    while(x!=0)
    {
        if((x%10)%2!=0)
            bnc++;
        x=x/10;
    }
    return bnc;
}
int main ()
{
    int n;
    printf("unesi celi broj n\n");
    scanf("%d",&n);
    printf("u broju %d imamo %d neparnih cifara",n,broj_neparnih(n));
    return 0;
}