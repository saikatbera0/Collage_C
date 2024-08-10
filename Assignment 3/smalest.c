#include<stdio.h>
int main()
{
	int n,n1;
	printf("Enter the two number:");
	scanf("%d%d",&n,&n1);
	if(n<n1){
		printf("Smallest number is:%d",n);
	}
	else if(n1<n){
		printf("Smallest number is:%d",n1);
	}
	else{
		printf("Both are equal.");
	}
}
