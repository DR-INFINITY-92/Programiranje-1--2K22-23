#include <stdio.h>

int main() 
{
    int n,i=1;
    p:
    printf("Unesite pozitivan ceo broj: \n");
    scanf("%d", &n)
    if (n <= 0) {
        printf("Unos nije ispravan.\n");
        goto p;
    }
    while (i <= n) 
    {
        printf("Mi volimo da programiramo.\n");
        i++;
    }
    return 0;
}
