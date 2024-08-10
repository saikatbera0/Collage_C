// Write a C program to perform comparison between two string and check whether both are equal or not.

#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	int z;
	printf("Enter the first string:");
	gets(a);
	printf("Enter the second string:");
	gets(b);
	z=strcmp(a,b);
	if(z==0)
	{
		printf("String are equal.");
	}
	else{
		printf("String are not equal.");
	}
}
