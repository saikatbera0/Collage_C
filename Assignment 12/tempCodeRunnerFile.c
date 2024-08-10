#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p,n,i;
    printf("Enter the number of array elements:");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    printf("Elements are:");
    for(i=0;i<n;i++){
        printf("%d ",*(p+i));
    }
}