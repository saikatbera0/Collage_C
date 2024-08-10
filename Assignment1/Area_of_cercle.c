//Write a c program to calculate area of cercle.
#include<stdio.h>
int main()
{
    float r,area;
    printf("Enter the redius: ");
    scanf("%f",&r);
    area=3.14*(r*r);
    printf("The area of curcle is %f \n",area);
}