/*Write a c program to implement calculator using switch case.
if choice is 1->Addition
if choice is 2->Subtraction
if choice is 3->Multiplecation*/
#include<stdio.h>
int main()
{
    int ch,result,a,b;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a,&b);
    printf("Enter your choice: ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        result=a+b;
        printf("Addition is: %d",result);
        break;
    case 2:
        result=a-b;
        printf("Subtraction is: %d",result);
        break;
    case 3:
        result=a*b;
        printf("Multiplecation is: %d",result);
        break;
    default:
        printf("Invelid Choice");
        break;
    }
    
}