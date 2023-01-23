/*ispitivanje da li su cifre unetog broja u rastucem ili opadajucem poretku*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int neopadajuce(int x)
{
	int pc,br1=0,bc=1;
	x=abs(x);
    pc=x%10;
    x=x/10;
	while(x>0)
	{
		if((x%10)<pc)
		{
			br1++;
		}
            pc=x%10;
		x=x/10;
        bc++;
	}
    if(br1==bc)
	    return 0;
    else    
        return 1;
}
int main() 
{
	int n;
	printf("unesi ceo broj n\n");
	scanf("%d",&n);

    if(neopadajuce(n)==0)
        printf("cifre broja %d, su u reastucem poretku\n",n);
    else 
		printf("cifre broja %d, nisu u rastucem poretku\n",n);	
    return 0;
}