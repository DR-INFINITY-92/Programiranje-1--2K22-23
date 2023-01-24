/*ispitivanje da li su cifre unetog broja u rastucem ili opadajucem poretku*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int neopadajuce(int x)
{
	int pc,br1=1,bc=1,bjc=1,br2=1;
	x=abs(x);
    pc=x%10;
    x=x/10;
	while(x>0)
	{
		if((x%10)<=pc)
			br1++;
		if((x%10)==pc)
			bjc++;
		if((x%10)>=pc)
			br2++;
		pc=x%10;
		x=x/10;
        bc++;
	}
	if(bc==bjc)
		return 4;
	else
    	if(br1==bc)
	   		return 1;
		else
    		if(br2==bc)    
        		return 0;
			else
				return 2;
}
int main() 
{
	int n;
	printf("unesi ceo broj n\n");
	scanf("%d",&n);

    if(neopadajuce(n)==1)
        printf("cifre broja %d, su u reastucem poretku\n",n);
    else 
		if(neopadajuce(n)==0)	
			printf("cifre broja %d, su u opadajucem poretku\n",n);	
		else
			if(neopadajuce(n)==4)
				printf("sve cifre broja %d su jednake",n);
			else	
				if(neopadajuce(n)==2)
					printf("nije ni rastuce ni opadajuce");
    return 0;
}