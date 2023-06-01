#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    char ime_grada[20];
    float p_temp;

}grad;

void ucitaj_gradove(int n, grad g[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("unesi ime grada\n");
        scanf("%s",&g->ime_grada);
        printf("unesi prosecnu temperaturu za decembar\n");
        scanf("%f",&g->p_temp);
    }
    printf("%s %f",g->ime_grada,g->p_temp);
}

void main()
{
    int n;
    printf("unesi koliko gradova ima\n");
    scanf("%d",&n);
    grad g[n];
    ucitaj_gradove(n,g);
}
