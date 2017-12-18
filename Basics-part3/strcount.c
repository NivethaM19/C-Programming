//c program to count the uppercas,lowercase and spl symbols in a string
#include <stdio.h>

int main(void) 
{
		int u,up=0,lc=0,sp=0,i;
		char a[50];
		scanf("%s",a);
		for(i=0;a[i]!='\0';i++)
		{
			u=a[i];
			if(u>=65 && u<=90)
			{
				up=up+1;
			}
			else if(u>=97 && u<=122) 
			{
				lc=lc+1;
			}
			else
			{	
				sp=sp+1;
			}
}
printf("\nuppercase:%d lowercase:%d special symbol:%d",up,lc,sp);
return 0;
}
