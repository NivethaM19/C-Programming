//largest  of three numbers
#include <stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
				printf("\n a is greater");
		}
		else
		{
				printf("\n c is greater");
		}
	}
	else
	{
		if(b>c)
		{
				printf("\n b is greater");
		}
		else
		{
				printf("c is greater");
		}
	}
	return 0;
}
