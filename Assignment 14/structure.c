#include <stdio.h>
struct Student {
    char name[50];
    int rollNo;
    float marks[3];
};

int main() {
    struct Student s;
    printf("Enter student name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.rollNo);
    printf("Enter marks in 3 subjects:\n");
    for (int i = 0; i < 3;i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &s.marks[i]);
    }
    float tm= 0;
    for (int i = 0; i < 3;i++) {
        tm=tm+ s.marks[i];
    }

    float avg= tm/3;
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.rollNo);
    printf("Total Marks: %f\n", tm);
    printf("Average Marks: %f\n", avg);

    return 0;
}