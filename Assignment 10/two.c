// Write a C program to implement concatenation of the two string without string function.
#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50],c[50];
	int i,j;
	printf("Enter the first string:");
	gets(a);
	printf("Enter the second string:");
	gets(b);
	i=0;
	j=0;
	while(a[i]!='\0')
	{
		c[j]=a[i];
		i=i+1;
		j=j+1;
	}
	i=0;
	while(b[i]!='\0')
	{
		c[j]=b[i];
		i=i+1;
		j=j+1;
	}
	c[j]='\0';
	printf("Concatination of two string is:");
	puts(c);
}