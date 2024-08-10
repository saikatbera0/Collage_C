//Write a C program to calculate sum of odd digit of number.

#include<stdio.h>
int main()
{
	int n,s=0,r;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(n%2!=0)
		{
			s=s+r;
		}
		n=n/10;
	}
	printf("Sum of odd digit of a number is:%d",s);
}
