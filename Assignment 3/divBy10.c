#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if((n%5==0)&&(n%10!=0))
	{
		printf("The number is divisible by 5 but not divisible by 10.");
	}
	else if((n%5==0)&&(n%10==0))
	{
		printf("The number is divisible by both 5 and 10.");
	}
	else{
		printf("The number is neither divisible by 5 nor divisible by 10.");
	}
}
