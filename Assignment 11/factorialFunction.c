//1.write a c program to calculate factorial of a number using function....
#include<stdio.h>
int factorial(int num){
    int i,fact=1;
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}
void main(){
    int n,fact;
    printf("Enter the Number: ");
    scanf("%d",&n);
    fact=factorial(n);
    printf("Factorial of the number is: %d",fact);
}