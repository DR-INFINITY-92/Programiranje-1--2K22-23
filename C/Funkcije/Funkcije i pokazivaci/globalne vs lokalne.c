#include<stdio.h>
#include<stdlib.h>

int osoba1(int milica)
{
    return 2*milica;
}
void osoba2(int *milica)
{
      *milica=2*(*milica);
}

void main()
{
    int a=8;
    printf("%d\n",a);
    // a=osoba2(a);
    // printf("%d\n",a);
    // osoba2(&a);
    // printf("%d\n",a);
    a=osoba1(a);
    printf("%d\n",a);
}
