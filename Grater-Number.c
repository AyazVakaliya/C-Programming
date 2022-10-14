#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of firest latter");
	scanf("%d",&a);
	printf("enter the value of second latter");
	scanf("%d",&b);
	if (a>b)
	{
		printf("a is grater");
	}
	else if(b>a)
	{
	 printf("b is grater");
	}
	else if(a==b)
	{
		printf("equal");
	}
	return 0;
	
}
