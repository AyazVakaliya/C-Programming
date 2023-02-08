#include<stdio.h>
int main()
{
	int n,i=2,flag=0;
	printf("enter number :");
	scanf("%d",&n);
	while(i<=n/2){
		if(n%i==0){
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0){
			printf("%d number is prime",n);
	}
	else{
		printf("%d number is not prime",n);
	}
}
