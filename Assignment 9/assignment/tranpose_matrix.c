//3.Write a c program to to print trunspose of a matrix...
#include<stdio.h>
void main(){
    int a[10][10],m,n,i,j;
    printf("Enter the row and column no : ");
    scanf("%d %d",&m,&n);
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is: \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("After transpose the matrix is: \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf(" %d",a[j][i]);
        }
        printf("\n");
    }
}