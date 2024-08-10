//Write a C program to cheak wheather a number is spy or not......
#include <stdio.h>
int main()
{
        int n,sum=0,product=1,r;
        printf("Enter the number: ");
        scanf("%d",&n);
        while(n>0)
        {
            r=n%10;
            sum=sum+r;
            product=product*r;
            n=n/10;
        }
        if(sum==product)
        {
            printf("This is a Spy Number.");
        }
        else
        {
            printf("This is not a spy number.");
        }
}