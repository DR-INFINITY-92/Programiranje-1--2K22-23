#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include </string.h>ctype.h>
int main()
{
    char s1[30], s2[30];
    int i, n1, n2, j = 0;
    printf("Unesi rec1:\n");
    scanf("%s", &s1);
    printf("Unesi rec2:\n");
    scanf("%s", &s2);
    n1 = strlen(s1);
    n2 = strlen(s2);
    for (i = 0; i < n1; i++)
        if (s1[i] == s2[j])
        {
            for (j = j; j < n2; j++)
            {
                if (s1[i + j] == s2[j])
                    continue;
                else
                    break;
            }
        }
    if (n2 == j)
        printf("string1 moze biti podstring");
    else
        printf("string2 ne moze biti podstring");
    return 0;
}