//Write a C program to calculate product of even degits of are number. Ex=4562; product=4*6*2=48;
#include <stdio.h>
int main()
{
    int num,product=1,r;
    printf("Enter a number: ");
    scanf("%d",&num);
    r=1;
    while(num>0)
    {
        r=num%10;
        if(r%2==0)
        {
            product=product*r;
        }
        num=num/10;
    }
    printf("The product of even degits are: %d",product);

}