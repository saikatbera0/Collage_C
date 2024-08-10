// Print the pattern.
// 1
// 12
// 123
// 1234
// 12345
#include<stdio.h>
int main()
{
	int r,c,i,j;
	printf("Enter the number of rows:");
	scanf("%d",&r);
	printf("Enter the number of columns:");
	scanf("%d",&c);
	for(i=1;i<=r;i=i+1)
	{
		for(j=1;j<=i;j=j+1)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
