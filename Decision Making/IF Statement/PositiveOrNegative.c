#include<stdio.h>
void main(){
	int n;
	printf("Enter Number: ");
	scanf("%d",&n);
	if(n>=0){
		printf("Positive Number");
	}
	if(n<0){
		printf("Negative Number");
	}
}
