#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	while(i<=5){
		printf("enter a number :");
		scanf("%d",&n);
		sum=sum+n;
		i++;
	}
	printf("sum=%d",sum);
}
