#include<stdio.h>
void main(){
	int n;
	printf("enter a number :");
	scanf("%d",&n);
	do{
		printf("%d",n%10);
		n=n/10;
	}
	while(n!=0);
}
