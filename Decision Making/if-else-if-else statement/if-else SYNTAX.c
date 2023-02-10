#include<stdio.h>
/*
	SYNTAX
	if(condition){statement-1;}
	else if(condition){statement-2;}
	...
	...
	else{statement-3;}
*/
int main(){
	int a,b;
	printf("Enter Number: ");
	scanf("%d",&a);
	printf("Enter Number: ");
	scanf("%d",&b);
	if(a>b){
		printf("A is Bigger");
	}
	else if(b>a){
		printf("B is Bigger");
	}
	else{
		printf("both are same");
	}
}
