#include<stdio.h>
int main()
{
	int sec,hour,min;
    	printf("enter the value of second");
	    scanf("%d",&sec);
		    hour=sec/3600;
		    sec=sec%3600;
		    min=sec/60;
		    sec=sec%60;
		    printf("\nHour %d",hour);
		    printf("\nMIN %d",min);
		    printf("\nSEC %d",sec);
	return 0;
}
