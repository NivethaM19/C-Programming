//to print a+aa+aaa+aaaa
#include <stdio.h>

int main(void) {

	 int n,sum=0,i;
	scanf("%d",&n);
	int m=n;
	for(i=1;i<=4;i++)
	{
		sum=sum+m;
		m=m*10+n;
	}
	printf("%d",sum);
	return 0;
}

