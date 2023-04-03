#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    int counter=0,n,i;
    char rec[30],slovo;
    
    printf("unesi rec ili recenicu\n");
    scanf("%s",rec);
    printf("unsi slovo koje trazis u reci\n");
    scanf(" %c",&slovo);
    n=strlen(rec);
    for(i=0;i<n;i++)
        if(rec[i]==slovo)
            counter++;
    printf("u unetom stringu %s slovo %c se pojavljuje %d puta",rec,slovo,counter);

}
