#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void main()
{
    int counter=0,n,i;
    char rec[30],slovo;
    printf("unesi rec ili recenicu\n");
    scanf("%s",rec);
    n=strlen(rec);
    printf("%s\n",rec);
    for(i=0;i<n;i++)
        if(islower(rec[i])==0)
            rec[i]=tolower(rec[i]);
        else    
            rec[i]=toupper(rec[i]);
    printf("%s",rec);

}
