#include <stdio.h>
#include<stdlib.h>

int main() 
{
    int a,b,max;
    printf("Unesi dva cela broja:\n");
    scanf("%d%d",&a,&b);
        if (a>b)
            max=a;
        else
            max=b;
    printf("Najveci broj je: %d\n",max);
    return 0;
}