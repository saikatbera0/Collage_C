//Write a C program to calculate sum of n natural number...
#include <stdio.h>
int main()
{
        int n,sum;
        printf("Enter the range: ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            sum=sum+i;
        }
        printf("The Sum of netural number is: %d",sum);
}