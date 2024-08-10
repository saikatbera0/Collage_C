// Write a C program to calculate length of a string without string function.

#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	int i,count=0;
	printf("Enter the string:");
	gets(a);
	i=0;
	while(a[i]!='\0')
	{
		count=count+1;
		i=i+1;
	}
	printf("Length of a string is:%d",count);
}
