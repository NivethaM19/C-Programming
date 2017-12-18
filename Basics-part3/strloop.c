//write a c program to print string one by one using loop
#include <stdio.h>

int main(void) 
{
	char a[50];	
	int i;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		printf("\n%c",a[i]);
	}
	return 0;
}
