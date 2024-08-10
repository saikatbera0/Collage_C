//weite a c program to cheak wheather a number is prime or not using break.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(n==1 || n==0) printf("This number is neither prime nor composite");
    else if(a==0){
        printf("This number is prime no");
    }
    else printf("This number is composite no");
return 0;
}