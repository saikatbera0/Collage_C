//Write a C program to Swap Two numbers using third veriable.....
#include<stdio.h>
int main()
{
	int a,b,i;
	printf("Enter the value of a and b:");
	scanf("%d %d",&a,&b);
	i=a;
	a=b;
	b=i;
	printf("After swaping a= %d and b= %d",a,b);
}
