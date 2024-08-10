//Write a C program to calculate factorial of a number...
#include <stdio.h>
int main()
{
        int n;
        long int fact=1;
        printf("Enter a number: ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("Factorial of a Number is: %ld",fact);
}