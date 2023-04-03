#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    int n;
    char rec[30];
    printf("unesi rec ili recenicu\n");
    scanf("%s",rec);
    n=strlen(rec);
    for(i=0;i<n;i++)
        rec[i]=tolower(rec[i]);
    printf("%s",rec);

}
