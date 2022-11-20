#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int x1,y1,x2,y2;
	p:
	printf("unesi x i y koordinatu prve dame\n");
	scanf("%d%d",&x1,&y1);
	printf("unesi x i y koordinatu druge dame\n");
	scanf("%d%d",&x2,&y2);
	if((x1==x2)&&(y1==y2))
	{
		printf("obe figure su na istom polju pogresan unos unesi opet\n");
		goto p;
	}
	else
	{
		if(x1==x2||y1==y2)
		{
			printf("dame se napadaju");
		}
		else
		{
			if(abs(x2-x1)==abs(y2-y1))
			{
				printf("dame se napadaju");
			}
			else
			{
				printf("dame se ne napadaju");
			}
		}
	}
	return 0;
}
