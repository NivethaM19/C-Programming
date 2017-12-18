//to count the numberof vowels in a string
#include <stdio.h>

int main(void) 
{
	char a[20];
	int i,count=0;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a' || a[i]=='e' ||a[i]=='i' ||a[i]=='o' ||a[i]=='u')
			count++;
	} 
	printf("%d",count);
	return 0;
}
