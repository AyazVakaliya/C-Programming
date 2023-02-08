#include<stdio.h>
/*
	SYNTAX
	do
	{
	//STATMENT
	}
	while(conditon);
*/
void main(){
	int i,n;
	printf("enter a number:");
	scanf("%d",&n);
	do{
		if(i%2!=0){
			printf("%d",i);
		}
		i++;
	}
	while(i<=n);
}
