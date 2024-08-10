//Write a C Program to cheak wheather a year Leap year or not...... 4/C
#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year:");
	scanf("%d",&year);
	if(((year%100==0)&&(year%400==0))||(year%100!=0)&&(year%4==0))
	{
		printf("The year is leap year");
	}
	else
	{
		printf("The year is not leap year");
	}
}
