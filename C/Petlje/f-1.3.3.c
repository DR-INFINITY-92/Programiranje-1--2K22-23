#include <stdio.h>

int main(void) {
    int n,i;
    p:
    printf("Unesite nenegativan ceo broj: ");
    scanf("%d", &n);
    if (n < 0) 
    {
        printf("Unos nije ispravan.\n");
        goto p;
    }

    for (i = 0; i <= n; i++) 
    {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
