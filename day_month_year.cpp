//Write a C program to find out Numbers of year,Month and days.Where 1 year=365 day;1 Month=30 days........
#include<stdio.h>
int main()
{
	int day,month,year;
	printf("Enter the day:");
	scanf("%d",&day);
	year=day/365;
	month=day/30;
	printf("Number of day is:%d \n",day);
	printf("Number of Month is:%d \n",month);
	printf("Number of year is:%d",year);
}
