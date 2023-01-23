#include<stdio.h>
#include<stdlib.h>
int sve_jednake_cifre(int x)
{
    int bnc=0,c;
    c=x%10;
    x=x/10;
    while((x%10)==c)
        x=x/10;
    return x;
}
int main ()
{
    int n;
    printf("unesi celi broj n\n");
    scanf("%d",&n);
    if(sve_jednake_cifre(n)==0)
        printf("sve cifre broja  %d su jednake ",n);
    else
         printf("u broju %d nisu sve cife jednake",n);
    return 0;
}