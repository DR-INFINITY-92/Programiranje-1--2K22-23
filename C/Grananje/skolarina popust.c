#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int t;
	float iznos_skolarine,prosek;
	printf("unesite da li ucenik ima republicka takmicenja\n");
	scanf("%d",&t);
	printf("unesi prosek ucenika\n");
	scanf("%f",&prosek);
	printf("unesi iznos skolarine\n");
	scanf("%f",&iznos_skolarine);
	if(prosek>=4.5 && prosek<=5.0)
	{
		iznos_skolarine=0.6*iznos_skolarine;
	}
	else
	{
		if(t==1)
		{
			iznos_skolarine=0.7*iznos_skolarine;
		}
		else
		{
			if(prosek>=3.5 && prosek<4.50)
			{
				iznos_skolarine=0.8*iznos_skolarine;
			}
			else
			{
				if(prosek>=2.5 && prosek<3.50)
				{
					iznos_skolarine=0.9*iznos_skolarine;
				}
			}
		}
	}
	printf("ucenik treba da plati iznos skolarine od %.2f\n",iznos_skolarine);
	return 0;
}