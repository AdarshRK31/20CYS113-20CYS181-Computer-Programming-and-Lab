#include<stdio.h>
#define con 3.14
float main()
{
	float b,h,area;
	printf("Enter the breadth");
	scanf("%f",&b);
	printf("Enter the height");
	scanf("%f",&h);
	area=con*b*h;
	printf("The area of the traingle with breadth %f and height %f is %f",b,h,area);
	return 0;
	}

