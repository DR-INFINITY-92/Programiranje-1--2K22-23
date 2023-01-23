/*ispitivanje da li su cifre unetog broja u rastucem ili opadajucem poretku*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int sve_jednake_cifre(int x)
{
    int bnc=0,c;
    c=x%10;
    x=x/10;
    while((x%10)==c)
        x=x/10;
    if(x==0)
        return 1;
    else 
        return 0;
}
int neopadajuce(int x)
{
	int pc,br1=0,bc=1,indikator;
	x=abs(x);
    pc=x%10;
    x=x/10;
	while(x>0)
	{
		if((x%10)<=pc)
		{
			br1++;
		}
		else 
            pc=x%10;
		x=x/10;
        bc++;
	}
		if((br1==bc) || br1>0)
			return 1;
		else    
			return 0;
}
int main() 
{
	int n;
	printf("unesi ceo broj n\n");
	scanf("%d",&n);
	if(sve_jednake_cifre(n)==1)
		printf("sve cifre broj %d su jednake",n);
	else
		if(neopadajuce(n)==1)
			printf("cifre broja %d, su u reastucem poretku\n",n);
		if(neopadajuce(n)==0)
			printf("cifre broja %d, nisu u rastucem poretku\n",n);	
    return 0;
}