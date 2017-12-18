//convert each character in string by 5 characters from it
#include <stdio.h>

int main(void) 
{
	char a[20];
	int i,u;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
	u=a[i];
	printf("%c",u+5);
	}

	return 0;
}
