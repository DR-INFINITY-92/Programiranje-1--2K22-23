#include<stdio.h>
#include<stdlib.h>
char da_li_je_broj_trocifren(int n)
{
    if(n>99 && n<1000)
        return 'y';
    else    
        return 'n';
}
void main ()
{
    int n;
    printf("unesi celi broj n\n");
    scanf("%d", &n);
    if(da_li_je_broj_trocifren(n)=='y')
        printf("broj n je trocifren");
    else    
        printf("broj n nije trocifren");

}