#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    int samoglasnikbr=0,suglasnikbr=0,n,i;
    char rec[30];
    
    printf("unesi rec ili recenicu\n");
    scanf("%s",rec);
    n=strlen(rec);
    for(i=0;i<n;i++)
    {
        if((rec[i]>64 && rec[i]<91)|| (rec[i]>96 && rec[i]<123))
            if(rec[i]=='a'||rec[i]=='e'||rec[i]=='i'||rec[i]=='o'||rec[i]=='u'||rec[i]=='A'||rec[i]=='E'||rec[i]=='I'||rec[i]=='O'||rec[i]=='U')
                samoglasnikbr++;
            else
                suglasnikbr++;
    }
    printf("u unetom stringu %s broj:\n samoglasnika je: %d\n suglasnika je:%d\n ostalih karaktera%d",rec,samoglasnikbr,suglasnikbr,n-samoglasnikbr-suglasnikbr);

}
