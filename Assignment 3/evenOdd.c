#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    if(n%2==0){
        printf("This number is even");
    }else{
        printf("This number is odd");
    }
}