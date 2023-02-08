#include<stdio.h>

/*	SYNTAX
 while(condition)
{
	Body of the while
	True part 
}	*/
int main()
{
	int i,n;
	printf("enter number :");
	scanf("%d",&n);
	while(i<=n){
		printf("\n%d",i);
		i++;
	}
}
