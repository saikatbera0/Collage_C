//Write a C program to findout sum of first degit and last digit of a number. Ex=2745; sum=2+5=7;;
#include<stdio.h>
int main()
{
    int last,first,num,sum;
    printf("Enter the Number: ");
    scanf("%d",&num);
    if(num>=10)
    {
        last=num%10;
        first=num;
        while(first>=10)
        {
            first=first/10;
        }
    sum=last+first;
    printf("The sum of degit is: %d",sum);
    }
    else{
        printf("Invalid Input! \n Because your number is: %d",num);
    }
}