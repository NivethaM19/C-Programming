//to remove dupicates in astring
#include<stdio.h>
#include<string.h>

main()
{
char a[100],b[100]={0};
printf("Enter the string\n");
scanf("%s",a);
int f=strlen(a);
int i,j,k=0,count=0;
for(i=0;i<f;i++)
{
	for(j=0;j<=i;j++)
	{
		if(a[i]==b[j])
		{
			count=1;
		}
	}
	if(count==0)
	{
		b[k++]=a[i];
	}
	count=0;
}
for(j=0;j<strlen(b);j++)
{
	printf("%c",b[j]);
}
}
