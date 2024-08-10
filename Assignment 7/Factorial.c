//Write a C program to calculate factorial of a number using do while loop..
#include<stdio.h>
int main()
{
    int num,fact,i=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    fact=1;
    do
    {
        fact=fact*i;
        i++;
    } while (i<=num);
    printf("Factorial of the given number is: %d",fact);
}
