#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("enter number :");
	scanf("%d",&n);
	while(i<n){
		if(n%i==0){
			printf("%d+",i);
			sum=sum+i;
		}
		i=i+1;
	}
	printf("=%d",sum);
	if(sum==0){
		printf("number is perfect");
	}
	else{
		printf("number is not perfect");
	}
	return 0;
}
