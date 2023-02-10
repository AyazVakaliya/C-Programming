#include<stdio.h>
/*
	SYNTAX
	if(condition)
	{
		//true part
	}
	else
	{
		//false part
	}
*/
int main(){
	int a;
	printf("Enter Number: ");
	scanf("%d",&a);
	if(a>=0){
		printf("Positive Number");
	}
	else{
		printf("Negative Number");
	}
}
