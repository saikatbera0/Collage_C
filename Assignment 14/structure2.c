#include <stdio.h>
struct Student {
    char name[50];
    int rollNo;
    float marks[3];
};
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    for (int i = 0; i < n;i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);
        printf("Marks in 3 subjects:\n");
        for (int j = 0; j < 3;j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
        }
    }
    printf("\nStudents with average marks greater than 60%%:\n");
    for (int i = 0; i < n;i++) {
        float tm = 0;
        for (int j = 0; j < 3;j++) {
            tm=tm + s[i].marks[j];
        }
        float avg = tm / 3;

        if (avg > 60) {
            printf("%s\n", s[i].name);
        }
    }

    return 0;
}