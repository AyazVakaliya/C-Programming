#include<stdio.h>
int main()
{
	int i=1,n;
	printf("enter number of factors :");
	scanf("%d",&n);
	while(i<=n){
		if(n%i==0)
			printf("%d",i);
			i++;
		
	}
}
