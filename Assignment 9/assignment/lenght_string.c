//4.Write a C program to calculate lenght of a string using string function......
#include<stdio.h>
#include<string.h>
void main()
{
    char a[10];
    int len;
    printf("Enter the name:");
    gets(a);
    printf("The name is: ");
    puts(a);
    len=strlen(a);
    printf("The Lenght of the string is: %d",len);
}