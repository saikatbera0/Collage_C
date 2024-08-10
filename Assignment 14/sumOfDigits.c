#include <stdio.h>
int sum(int n);
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Sum of n natural number:%d",sum(n));
}
int sum(int n) {
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}