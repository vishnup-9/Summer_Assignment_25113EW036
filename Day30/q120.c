/* Q120 Write a program to Develop complete mini
project using arrays, strings and functions */

#include <stdio.h>
#include <string.h>

#define MAX 50

struct Student {
    int roll;
    char name[50];
    float marks;
};

struct Student s[MAX];
int count = 0;

void addStudent() {
    printf("\nEnter Roll Number: ");
    scanf("%d", &s[count].roll);

    printf("Enter Name: ");
    scanf("%s", s[count].name);

    printf("Enter Marks: ");
    scanf("%f", &s[count].marks);

    count++;
    printf("Student Added Successfully!\n");
}

void displayStudents() {
    int i;

    if (count == 0) {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\nStudent Records:\n");
    printf("Roll\tName\tMarks\n");

    for (i = 0; i < count; i++) {
        printf("%d\t%s\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
    }
}

void searchStudent() {
    char search[50];
    int i, found = 0;

    printf("\nEnter Student Name: ");
    scanf("%s", search);

    for (i = 0; i < count; i++) {
        if (strcmp(s[i].name, search) == 0) {
            printf("\nRecord Found:\n");
            printf("Roll: %d\n", s[i].roll);
            printf("Name: %s\n", s[i].name);
            printf("Marks: %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student Not Found!\n");
}

int main() {
    int choice;

    do {
        printf("\n===== Student Record Management =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                printf("Thank You!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while (choice != 4);

    return 0;
}