//to calculate the power of number
#include<stdio.h>
int main(void)
{
int n,pow,power,i;
printf("\n enter the number");
scanf("%d",&n);
printf("\n enter the power value");
scanf("%d",&pow);
power=n;
for(i=1;i<pow;i++)
{
  power=power*n;
}
printf("\n%d",power);
return 0;
}
