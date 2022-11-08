#include<stdio.h>
#include<stdlib.h>
int main()
{
    char x;
    printf("unesi malo ili veliko slovo abecede\n");
    scanf(" %c",&x);
    if(x>='a'&&x<='z')
    {
        printf("uneti znak je %c\n",x);
        printf("njegov ascii kod je %d\n",x);
        printf("Odgovarajuce veliko slovo je %c\nnjegov ascii kod je %d\n",x-32,x-32);
    }
    else
    {
        if(x>='A'&&x<='Z')
        {
            printf("uneti znak je %c\n",x);
            printf("njegov ascii kod je %d\n",x);
            printf("Odgovarajuce malo slovo je %c\nnjegov ascii kod je %d\n",x+32,x+32);
        }
        else
        {   
            printf("uneti znak je %c\n",x);
            printf("njegov ascii kod je %d\n",x);
        }
    }
    return 0;
}