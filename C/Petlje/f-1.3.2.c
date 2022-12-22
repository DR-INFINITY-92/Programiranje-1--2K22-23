#include <stdio.h>

int main() 
{
    int i,n;
    p:
    printf("Unesite pozitivan ceo broj: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Unos nije ispravan.\n");
        goto p;
    }

    for (i = 1; i <= n; i++) 
    {
        printf("Mi volimo da programiramo.\n");
    }
    return 0;
}
