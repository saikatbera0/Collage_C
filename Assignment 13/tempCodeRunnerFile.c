#include<stdio.h>
#include<string.h>
struct student_record
{
    char name[30];
    int roll;
    float marks;
    char stream[20];
};
struct student_record s;
void main(){
    //input
    printf("Enter the student name:");
    gets(s.name);
    printf("Enter the student roll:");
    scanf("%d",&s.roll);
    printf("Enter the student marks:");
    scanf("%f",&s.marks);
    fflush(stdin);
    printf("Enter the student stream:");
    gets(s.stream);
    //output
    printf("\n------Student Details-----");
    printf("\nThe student name is:");
    puts(s.name);
    printf("The student roll no is:%d",s.roll);
    printf("\nThe student marks is:%f",s.marks);
    printf("\nThe student stream is:");
    puts(s.stream);
}
