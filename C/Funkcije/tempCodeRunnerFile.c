/*Ispitivanje da li je broj armstrongov*/
#include <stdio.h>
#include <stdlib.h>
int stepen(int k, int n)
{
	int j,p=1;
	for(j=0;j<n;j++)
		p=p*k;
	return p;
}
int broj_cifara(int n)
{
    int b=0;
    while(n>0)
    {
        b++;
        n=n/10;
    }
    return b;
        
    
}
int armstrong(int n)
{
	int m,brc=0,s=0;
	m=n;
	brc=broj_cifara(n);
	while(m>0)
	{
		s=s+stepen(m%10,brc);
		m=m/10;
	}
	if(n==s)
		return 1;
	else
		return 0;
}
int main() 
{
	int i,x,n;
	printf("unesi broj x\n");
	scanf("%d",&x);
	if(armstrong(x)==1)
		printf("broj %d je armstrongov",x);
	else
		printf("broj %d nije armstrongov",x);
	return 0;
}