//replace each alphabet in a string with its number
#include <stdio.h>
int main(void) 
{
	char a[20];
	int i,u,v,w;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
	u=a[i];
	v=26-(122-u);
	printf("%d",v);
	}
return 0;
}
