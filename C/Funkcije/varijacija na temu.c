#include<stdio.h>
#include<stdlib.h>
void negativni()
{
    int i,x,bnb=0,n;
    int a[100];
    printf("unesi koliko zelis brojeva da uneses\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("unesi %d. broj\n",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            printf("%d ",a[i]);
            bnb++;
        }
        
    }
        printf("u unetoj seriji brojeva bilo je %d negativnih",bnb);
}
int main ()
{
    
    negativni();
    return 0;
}