//count the number of characters in a string
#include<stdio.h>
int main(void)
{
	char a[10];
	int count=0,i=0;
	scanf("%s",a);
	while(a[i]!=0)
	{
		count=count+1;
		i++;
	}
	printf("%d",count);
	return 0;
}
