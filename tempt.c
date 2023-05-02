#include<stdio.h>
int main()
{
	int t,T;
	printf("Enter the time:");
	scanf("%d",&t);
	T=(4*t*t)/(t+2)-20;
	printf("The tempereture is %d",T);
	return 0;
} 
