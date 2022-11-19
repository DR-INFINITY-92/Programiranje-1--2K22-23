#include<stdio.h>
#include<stdlib.h>
int main()
{
    char x;
    int broj,proizvod=1,br=3,i=3;
    p:
    printf("unesi znak\n");
    scanf(" %c",&x);
    if(x>=48 && x<=57)
    {
        broj=x-48;
        proizvod=proizvod*broj;
        i--;
    }
    else 
    {
        br--;
        i--;
    }
    if(i!=0)
        goto p;
    else
    {
         if(br==0)
             printf("medju unetim znakovima nema cifara");
        else 
             printf("proizvod=%d",proizvod);
    }
return 0;
}