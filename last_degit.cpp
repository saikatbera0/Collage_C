//Write a C program to find out last degit of this number....
#include<stdio.h>
int main()
{
	int number,last_degit;
	printf("Enter the number:");
	scanf("%d",&number);
	last_degit=number%10;
	printf("The last degit of the number is:%d",last_degit);
}
