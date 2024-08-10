// 2.Write a C Program to implement addition of two matrix..
#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10], m, n, i, j;
    printf("Enter the row and columns: ");
    scanf("%d %d", &m, &n);
    printf("Enter the First Matrix value: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("a[%d][%d]->", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the Secound Matrix value: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("b[%d][%d]->", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("The addition of the two matrix is: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}