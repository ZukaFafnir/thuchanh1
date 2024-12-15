#include<stdio.h>
int main(){
	int hours,wage,allowance;
	allowance=0;
	printf("The number of working hours in a month and the hourly wage ");
	scanf("%d %d",&hours,&wage);
	if(hours>160)
		allowance=hours*wage/10;
	int totalwage=hours*wage+allowance;
	printf("Totalwage your is %d",totalwage);
	return 0;
}
