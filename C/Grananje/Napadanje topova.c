#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int y1,y2;
	char x1,x2;
	pocetak:
	printf("unesi koordinate prvog topa\n");
	scanf(" %c %d",&x1,&y1);
	printf("unesi koordinate drugo topa\n");
	scanf(" %c %d",&x2,&y2);
	if((y1>0&&y1<9)&&(y2>0&&y2<9))
	{
		if((x1>='A'&&x1<'I')&&(x2>='A'&&x2<'I'))
		{
			goto k;
		}
		else
		{
			printf("pogresno si uneso slovo, mozes da uneses od A-H\n");
			goto pocetak;
		}
	}
	else
	{
		printf("pogresno si uneo broj, mozes da uneses od 1-8\n");
		goto pocetak;
	}
	k:
	if(x1==x2 && y1==y2)
	{
		printf("figure su na istom polju unesite opet\n");
		goto pocetak;
	}
	else
	{
		if(x1==x2 || y1==y2)
		{
			printf("topovi se napdaju\n");
		}
		else
		{
			printf("topovi se ne napadaju\n");
			goto pocetak;
		}
	}
	return 0;
}
