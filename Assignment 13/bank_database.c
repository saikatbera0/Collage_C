#include <stdio.h>
struct Student {
    char name[50], bname[50],address[50];
    float balance;
    long int accno;
};

int main() {
    struct Student s;

    printf("Enter account holder name: ");
    gets(s.name);
    printf("Enter the bank name:");
    gets(s.bname);
    printf("Enter Account No.:");
    scanf("%ld", &s.accno);
    fflush(stdin);
    printf("Enter your address:");
    gets(s.address);
    printf("Enter balance: ");
    scanf("%f", & s.balance);
    printf("\n");
    printf("---------------------------\n");
    printf("Bank Account Details:\n");
    printf("\n");
    printf("account holder name is: ");
    puts(s.name);
    printf("Bank name is:");
    puts(s.bname);
    printf("Account No.:%ld\n",s.accno);
    printf("Address:");
    puts(s.address);
    printf("Balance:%f ",s.balance);
    printf("\n---------------------------");

}