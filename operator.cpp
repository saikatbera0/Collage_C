//Write a C program to implement addition Subtraction multiplication And devition operator in there 
//if chice is 1 then do addition, choice is 2 then do subtraction, choice is 3 then do multiplecation, choice is 4 then do divition....
#include<stdio.h>
int main()
{
	int a,b,choice;
	printf("Enter the Two number: ");
	scanf("%d %d",&a,&b);
	printf("Enter the choice (for add=1,sub=2,multi=3,dev=4):");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("Addition is: %d",a+b);
	}
	else if(choice==2)
	{
		printf("Subtraction is: %d",a-b);
	}
	else if(choice==3)
	{
		printf("Multiplecation is: %d",a*b);
	}
	else if(choice==4)
	{
		printf("Davision is: %d",a/b);
	}
	else
	{
		printf("Wrong Choice!\nPlease enter a valid Choice..");
	}
}
