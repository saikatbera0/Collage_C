//Write a C Program to print all the numbers which are not devisible by 7 between given renge..
#include<stdio.h>
int main()
{
    int l,h;
    printf("Enter the lower range: ");
    scanf("%d",&l);
    printf("Enter the higher range: ");
    scanf("%d",&h);
    for (int i = l; i <= h; i++)
    {
        if (i%7==0)
        {
            continue;
        }
        printf("%d \n",i);
    }
    
}