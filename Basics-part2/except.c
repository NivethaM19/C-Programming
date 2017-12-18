//write a c program to accept words other then xacdf
#include <stdio.h>

int main(void) 
{
	char a[20];
	scanf("%[^xacdf]s",a);
	printf("%s",a);
	return 0;
}
