#include <stdio.h>
int main(void) {
	int f1=0,f2=1,n,f3;
	printf("%d\n%d",f1,f2);
	scanf("%d",&n);
	for(int i=1;i<=n-2;i++)
	{
		f3=f2+f1;
		printf("\n%d",f3);
		f1=f2;
		f2=f3;
	}
	
	return 0;
}
