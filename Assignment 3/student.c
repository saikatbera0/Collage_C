#include<stdio.h>
int main()
{
	int a,b,c,d,avg;
	printf("enter the marks of the 4 numbers:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	avg=((a+b+c+d)/4);
	if(avg>=40){
		printf("The student has passed in the exam");
	}
	else{
		printf("The student has failed in the exam");
	}
}

