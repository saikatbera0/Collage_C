//Write a C program to convart temparature celcious to fatrnhite and vice verser...
#include<stdio.h>
int main()
{
	float c,f,c1,f1;
	printf("Enter the value of celcious:");
	scanf("%f",&c);
	f=((9.0*c)/5.0)+32;
	printf("Farenhite value is:%f \n",f);
	printf("Enter the value of farenhite:");
	scanf("%f",&f1);
	c1=((f1-32)/9.0)*5;
	printf("Celcious value is:%f",c1);s
}
