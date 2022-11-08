#include<stdio.h>
#include<stdlib.h>
int main()
{
    char x;
    int broj,proizvod=1,br=3;
    printf("unesi celi broj\n");
    scanf(" % c",&x);
    if(x>=48 && x<=57)
    {
        broj=57-(57-x);
        proizvod=proizvod*broj;
    }
    else 
        br--;
    
    if(br==0)
        printf("medju unetim znakovima nema cifara");
    else 
        printf("proizvod=%d",proizvod);

return 0;

}