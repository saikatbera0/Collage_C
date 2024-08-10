//Write a C program to cheak Wheather a Cherecter is Upper cash or Lower Cash Cherecter... 4/B
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the Cherecter: ");
	scanf("%c",&ch);
	if((ch>='A')&&(ch<='Z'))
	{
		printf("This Cherecter is Upper Case Cherecter");
	}
	else if((ch>='a')&&(ch<='z'))
	{
		printf("This Cherecter is Lower Case Cherecter..");
	}
	else
	{
		printf("This is not a Cherecter");
	}
}
