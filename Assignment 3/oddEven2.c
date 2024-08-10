#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    if(n>0 && n%2==0){
        printf("This number is positive even");
    }else if(n<0 && n%2!=0){
        printf("This number is negative odd");
    }else{
        printf("This is neighter posetive even or negative odd");
    }
}