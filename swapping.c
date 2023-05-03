#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the first value");
	scanf("%d",&a);
	printf("Enter the second value");
	scanf("%d",&b);
	b=b*a;
	a=b/a;
	b=b/a;
	printf("The first value is %d and second value is %d",a,b);
	return 0;
}

