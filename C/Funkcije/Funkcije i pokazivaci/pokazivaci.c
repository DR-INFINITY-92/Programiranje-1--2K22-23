#include<stdio.h>
#include<stdlib.h>
void main ()
{
    int x,*p;
    x=6;
    p=&x;
    printf("vrednost od x =%d\n",x);
    printf("adresa od x=%d\n",&x);
    printf("vrednost od p =%d\n",&p);
    *p=10;
    printf("vrednost od x=%d",x);
}