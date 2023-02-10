#include<stdio.h>
int main(){
	int a;
	printf("Enter Number: ");
	scanf("%d",&a);
	if(a%2==0){
		printf("%d is EVEN Number",a);
	}
	else{
		printf("%d is ODD Number",a);
	}
}
