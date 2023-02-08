#include<stdio.h>
int main()
{
	int i,n;
	printf("enter number for multiplication table :");
	scanf("%d",&n);
	while(i<=10){
		printf("%d*%d=%d\n",n,i,n*i);
		i++;
	}
}
