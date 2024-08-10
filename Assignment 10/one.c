// Write a C program to implement following operation using string function.
// Copy string
// Convert Lowercase to uppercase
// Convert uppercase to lowercase
// Reverse of the string

#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	printf("Enter the string:");
	gets(a);
	strcpy(b,a);
	printf("Copy of the string is:");
	puts(b);
	strlwr(a);
	printf("Lower case of the string is:");
	puts(a);
	strupr(a);
    printf("Upper case of the string is:");
	puts(a);
	strrev(a);
	printf("Reverse of the string is:");
	puts(a);
}
