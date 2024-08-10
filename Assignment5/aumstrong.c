//Write a C program to cheak wheather a number is aumstrong number or not
#include <stdio.h>
int main()
{
        int n,r,p,n1;
        printf("Enter the number: ");
        scanf("%d",&n);
        p=0;
        n1=n;
        while(n>0)
        {
            r=n%10;
            p=p+r*r*r;
            n=n/10;
        }
        if(n1==p)
        {
            printf("This is a Armstrong number.");
        }
        else
        {
            printf("This is not a Armstrong Number.");
        }
        
}