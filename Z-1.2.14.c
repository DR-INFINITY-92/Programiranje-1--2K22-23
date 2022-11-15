#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,k,s,d,j;
    printf("unesi broj n\n");
    scanf("%d",&n);
    s=n/100;
    d=(n/10)%10;
    j=n%10;
    if(s==d&&s==j&&d==j)
        k=n;
    else
    if(s>d && s>j)
        if(d<j)
            k=j*100+d*10+s;
        else
            k=j*100+d*10+s;
    else
    {
        if(d>s && d>j)
        {
            if(s<j)
                k=s*100+d*10+j;
             else
                k=s*100+j*10+d;
        }
        else
        {
            if(s<d)
                k=j*100+d*10+s;
            else
                k=s*100+j*10+d;
        }   
    }
    printf("%d",k);
}