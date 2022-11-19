#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y;
    char operacija;
    float rezultat;
    p:
    scanf("%d",&x);
    scanf(" %c",&operacija);
    scanf("%d",&y);
    switch(operacija)
    {
        case '+':
            rezultat=x+y;
            break;
        case '-':
            rezultat=x-y;
            break;
        case '*':
            rezultat=x*y;
            break;
        case '/':
            if(y==0)
            {
                printf("sa nulom se ne deli unesite opet brojeve\n");
                goto p;
            }
            else
            {
                rezultat=1.0*x/y;
                break;
            }
        case '|':
            if(y==0)
            {
                printf("sa nulom se ne deli unesite opet brojeve\n");
                goto p;
            }
            else
            {
                rezultat=x/y;
                break;
            }
        case '%':
            if(y==0)
            {
                printf("sa nulom se ne deli unesite opet brojeve\n");
                goto p;
            }
            else
            {
                rezultat=x%y;
                break;
            }
        default:
            printf("uneli ste nepostojecu operaciju unesite opet\n");
            goto p;
    }
    printf("%.2f",rezultat);
    return 0;
}