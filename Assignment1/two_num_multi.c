//Write a C Program to calculate addition,Subtraction and multiplecation of two number.
#include<stdio.h>
int main()
{
    int a,b,sum,sub,multi;
    printf("Enter two Number:- ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    sub=a-b;
    multi=a*b;
    printf("Addition of two number is %d \n",sum);
    printf("Subtraction of two number is %d \n",sub);
    printf("Multiplecation of two number is %d ",multi);
}