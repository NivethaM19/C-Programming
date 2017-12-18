//to print odd numbers between a range
#include<stdio.h>
int main(void)
{
int lower ,upper,i;
printf("enter the range:");
scanf("%d %d",&lower,&upper);
for(i=lower+1;i<upper;i++)
{
if(i%2!=0)
printf("\n%d",i);
}
return 0;
}
