#include <stdio.h>
#include<stdlib.h>

int main() 
{
    int a,b,min;
    printf("Unesi dva cela broja:\n");
    scanf("%d%d",&a,&b);
        if (a<b)
            min=a;
        else
            min=b;
    printf("Najmanji broj je: %d\n",min);
    return 0;
}