#include<stdio.h>
int main(){
	int i,j,n;
	printf("Enter the number of rows");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=1;j<=i;j--)
		{
			printf(" ");
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<=2*i+1;j--)
		{
			printf(" 1 ");
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<=2*i+1;j--)
		{
