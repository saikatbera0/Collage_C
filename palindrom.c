//Write a C program to cheak whether a number is pelimdrom number or not
#include<stdio.h>
int main()
{
	int n,n1,r,rev;
	printf("Enter the number:");
	scanf("%d",&n);
	rev=0;
	n1=n;
	while(n>0){
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	}
	if(n1==rev){
		printf("Palindrome Number");
	}
	else{
		printf("Not Palindrome Number");
	}
}