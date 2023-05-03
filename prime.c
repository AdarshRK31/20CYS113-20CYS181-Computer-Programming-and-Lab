#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter a number=");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			printf("%d This is a not a prime number",n);
		break;
		}
		printf("%d This is a prime number",n);

		
	}
	return 0;
	}





