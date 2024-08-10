#include<stdio.h>
int power(int a,int b){
    int res=1;
    for(int i=1;i<=b;i++){
        res=res*a;
    }
    return res;
}
int main(){
    int a,b;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    int res=power(a,b);
    printf("Result is:%d",res);
}