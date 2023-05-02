#include<stdio.h>
#define REWARD 10
int main()
{
	int start,end,payment;
	printf("Enter the starting value");
	scanf("%d",&start);
	printf("Enter the ending value");
	scanf("%d",&end);
	payment=(end-start)*REWARD;
	printf("The payment is %d",payment);
	return 0;
}

	

