#include<stdio.h>
int main(){
	int num[10],i,positive,negative;
	positive=0;
	negative=0;
	for(i=0;i<10;i++){
		printf("Enter Array Element=");
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++){
		if(num[i]>0){
			positive=positive+1;
		}
		else{
			negative=negative+1;
		}
		printf("\nPositive=%d,Negative=%d",positive,negative);
	}
}
