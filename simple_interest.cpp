//Write a c program to calculate Simple interest.....
#include<stdio.h>
int main()
{
	int p;
	float r,t,si;
	printf("Enter the principal amount:");
	scanf("%d",&p);
	printf("Enter the rate of interest:");
	scanf("%f",&r);
	printf("Enter the time period:");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("Value of Simple Interst is: %f",si);
}
