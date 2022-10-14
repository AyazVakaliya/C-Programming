#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter value of firest latter");
	scanf("%d",&a);
	printf("enter value of second latter");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("\na= %d",a);
	printf("\nb= %d",b);
	return 0;
}
