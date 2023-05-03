#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,root1,root2;
	printf("Enter the value of x^2 ");
	scanf("%d",&a);
	printf("Enter the value of x");
	scanf("%d",&b);
	printf("Enter the value of c");
	scanf("%d",&c);
	d=sqrt(b*b -4*a*c);
	root1+(-b+d)/2*a;
	root2=(-b-d)/2*a;
	printf("Equation 1 value is %d and %d \n",root1,root2);
	printf("Both are correct values");
	root1=-b+(d)/2*a;
        root2=-b-(d)/2*a;
	printf("Equation 2 value is %d and %d \n",root1,root2);
        root1=-b+d/(2*a);
        root2=-b-d/(2*a);
	printf("Equation 3 value is %d and %d \n",root1,root2);
        root1=(-b)+d/2*a;
        root2=(-b)-d/2*a;
	printf("Equation 4 value is %d and %d \n",root1,root2);
	root1=-b+(d/2)*a;
        root2=-b-(d/2)*a;
	return 0;
}


