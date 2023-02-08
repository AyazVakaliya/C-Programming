#include<stdio.h>
/*	SYNTAX
	for(initilization;condition,update Statement)
	{
	STAMENTS
	}
*/
void main()
{
	int i,n;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d\n",i);
	}
}
