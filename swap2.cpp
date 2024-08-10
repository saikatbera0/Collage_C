//Write a C Program to swap two numbers without using third veriable....
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a and b: ");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After Swaping the value of a= %d and b=%d",a,b);
}
