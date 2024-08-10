//Write a C Program to Cheak Wheather a Cherecter is VoWel or Consonent..... 4/A
#include<stdio.h>
//using function
char calculate(char ch){
	if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
	{
		printf("This Cherecter is Vowel..");
	}
	else
	{
		printf("This cherecter is Consonent..");
	}
	return ch;
}
int main()
{
	//without using function
	char ch;
	printf("Enter the Cherecter: ");
	scanf("%c",&ch);
	if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
	{
		printf("This Cherecter is Vowel..\n");
	}
	else
	{
		printf("This cherecter is Consonent..\n");
	}
	calculate(ch);
}
