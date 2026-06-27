/* Q108 Write a program to Create marksheet
generation system. */

#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student {
        char name[50];
        int marks[5];
        float average;
    };

    struct Student students[n];

    for (i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        students[i].average = 0;

        for (int j = 0; j < 5; j++) {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
            students[i].average += students[i].marks[j];
        }
        students[i].average /= 5;
    }

    printf("\nMarksheet:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Average Marks: %.2f\n", students[i].average);
    }

    return 0;
}