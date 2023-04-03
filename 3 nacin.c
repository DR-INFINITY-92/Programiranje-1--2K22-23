#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void main()
{
    int samoglasnikbr=0,suglasnikbr=0,brb=0,n,i;
    char rec[30];
    
    printf("unesi rec ili recenicu\n");
    scanf("%s",rec);
    n=strlen(rec);
    for(i=0;i<n;i++)
    {
        if(isdigit(rec[i])!=0)
            brb++;
        else
            if(isalpha(rec[i])!=0)
                if(tolower(rec[i])=='a'||tolower(rec[i])=='e'||tolower(rec[i])=='i'||tolower(rec[i])=='o'||tolower(rec[i])=='u')
                     samoglasnikbr++;
                else
                    suglasnikbr++;
    }
    printf("u unetom stringu %s broj:\n samoglasnika je: %d\n suglasnika je:%d\n broj brojeva%d",rec,samoglasnikbr,suglasnikbr,brb);

}
