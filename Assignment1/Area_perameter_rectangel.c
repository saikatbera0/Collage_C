//Write a C program to calculate area and peramiter of rectangel.
#include<stdio.h>
int main()
{
    float l,b,area,pera;
    printf("Enter the leanth of the rectangel is:- ");
    scanf("%f",&l);
    printf("Enter the breath of the rectangel is:- ");
    scanf("%f",&b);
    area=l*b;
    pera=2*(l+b);
    printf("The area of the rectangel is %f \n",area);
    printf("The Perameter of the rectangel is %f",pera);
}