/* Q105 Write a program to Create student record
management system. */

#include <stdio.h>
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};
int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nStudent Records:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}