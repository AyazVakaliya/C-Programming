#include<stdio.h>
void main(){
	int i,n,sum=0;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(n%i==0){
			printf("%d+",i);
			sum=sum+i;
		}
	}
	printf("=%d",sum);
	if(sum==n){
		printf("\n%d is a perfect number",n);
	}
	else{
		printf("\n%d is not a perfect number",n);
	}
}
