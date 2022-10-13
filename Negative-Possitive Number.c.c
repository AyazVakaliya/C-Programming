#include<stdio.h>
int main(){
	int a,b;
	printf("enter the value of firest latter");
	scanf("%d",&a);
	if(a>0){
		printf("a is possitive");
	}
	else if(a<0){
		printf("a is negative");
	}
	else if(a==0){
		printf("a is zero");
	}
	return 0;
}
