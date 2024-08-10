#include<stdio.h>
void pow(int a,int b){
    int res=1;
    for(int i=1;i<=b;i++){
        res=res*a;
    }
    printf("Result is:%d",res);
}
int main(){
    int a,b;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    pow(a,b);
}