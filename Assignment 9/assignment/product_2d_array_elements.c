//1.Write a C Program to calculate product of 2d array elements..
#include<stdio.h>
void main(){
    int a[20][20],m,n,i,j,p=1;
    printf("Enter the row and columns: ");
    scanf("%d %d",&m,&n);
    for ( i = 0; i < m; i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]->",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Elements of 2d array are: \n");
    for ( i = 0; i < m; i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < m; i++)
    {
        for(j=0;j<n;j++)
        {
            p=p*a[i][j];
        }
    }
    printf("Product of the 2d array elements are: %d",p);
}