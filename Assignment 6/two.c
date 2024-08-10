//Write a C program to check whether a number is prime or not.

#include<stdio.h>
int main()
{
	int n,i,count;
	printf("Enter the number:");
	scanf("%d",&n);
	count=0;
	for(i=1;i<=n;i=i+1)
	{
		if(n%i==0)
		{
			count=count+1;
		}
	}
	if(count==2)
	{
		printf("The number is prime number.");
	}
	else{
		printf("The number is not a prime number.");
	}
}
