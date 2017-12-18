int main(void) 
{
	int i,j,n,k;
	printf("\n enter the number of rows\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=i;
		for(j=1;j<=n;j++)
		{
			printf("\t%d",k);
			if(k==n)
				k=1;
			else
				k++;
		}
	printf("\n");
	}

return 0;

}
