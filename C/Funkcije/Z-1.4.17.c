/*basic verzija ispitivanje da li su cifre u unetom broju idu cik cak par nepar*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int par_nepar(int x)
{
	int indikator=1,pc;
	x=abs(x);
    pc=x%10;
    x=x/10;
	while(x>0)
	{
		if(((x%10)%2)==(pc%2))
		{
			indikator=0;
            break;
		}
        pc=x%10;
		x=x/10;
	}
	return indikator;
}
int main() 
{
	int n,c;
		printf("unesi broj n\n");
		scanf("%d",&n);
            if(par_nepar(n)==1)
                printf("broj %d, ispunjava uslov i sastoji se iz naizmenicno parno neparnih cifara\n",n);
            else
                printf("broj %d, ne ispunajava uslov i ne stoji iz naizmenicno parno neparnih cifara\n",n);	
    return 0;
}