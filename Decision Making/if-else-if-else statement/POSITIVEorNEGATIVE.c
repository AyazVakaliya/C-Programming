#include<stdio.h>
int main(){
	int a;
	printf("Enter Number: ");
	scanf("%d",&a);
	if(a>0){
		printf("Positive Number");
	}
	else if(a==0){
		printf("ZERO");
	}
	else{
		printf("Negative Number");
	}
}
