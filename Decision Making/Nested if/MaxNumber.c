#include<stdio.h>
/*
	if(condition-1)
	{
		if(condition-2)
		{
			statement-1;
		}
		else{
			statement-2;
		}
	}
*/
int main(){
	int a,b,c;
	printf("Enter Number: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(a>c){
			printf("%d is max",a);
		}
		else{
			printf("%d is max",c);
		}
	}
	else{
		if(b>c){
			printf("%d is max",b);
		}
		else{
			printf("% is max",c);
		}
	}
}
