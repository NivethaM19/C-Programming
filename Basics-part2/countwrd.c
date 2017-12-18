//to count the number of words in a string
#include <stdio.h>
int main(void) 
{
char a[200];
int count=1,i;
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
	if(a[i]==' ')
	{
		count++;
	}
}
printf("%d",count);
return 0;
}
