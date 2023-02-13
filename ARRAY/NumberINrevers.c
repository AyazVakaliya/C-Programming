#include<stdio.h>
void main(){
	int num[100],n,i;
	printf("Enter Number of Array Element=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter Array Element=");
		scanf("%d",&num[i]);
	}
	for(i=n-1;i>0;i--){
		printf("%d\n",num[i]);
	}
}
