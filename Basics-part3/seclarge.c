//find largest and second largest element in an array of integers
#include <stdio.h>
int main(void)
 {
int n,i,max1=0,max2=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
	scanf("\n%d",&a[i]);
}
for(i=0;i<n;i++)
{
	 if(a[i]>max1)
	{
		max1=a[i];
	}
}
printf("\n%d",max1);
for(i=0;i<n;i++)
{
	if(a[i]>max2 && a[i]<max1)
	{
		max2=a[i];
	}
}
printf("\n%d",max2);
return 0;
}
