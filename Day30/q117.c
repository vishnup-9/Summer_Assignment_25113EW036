/* Q117 Write a program to Create student record
system using arrays and strings. */

#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 100

typedef struct {
    int id;
    char name[MAX_NAME_LENGTH];
    float score;
} Student;

Student students[MAX_STUDENTS];
int student_count = 0;

// Function to add a student to the record
void addStudent() {
    if (student_count < MAX_STUDENTS) {
        printf("Enter student ID: ");
        scanf("%d", &students[student_count].id);
        printf("Enter student name: ");
        scanf("%s", students[student_count].name);
        printf("Enter student score: ");
        scanf("%f", &students[student_count].score);
        student_count++;
        printf("Student added successfully!\n");
    } else {
        printf("Student record is full. Cannot add more students.\n");
    }
}

// Function to display the student records
void displayStudents() {
    if (student_count == 0) {
        printf("No students in the record.\n");
    } else {
        printf("Student Records:\n");
        printf("ID\tName\tScore\n");
        for (int i = 0; i < student_count; i++) {
            printf("%d\t%s\t%.2f\n", students[i].id, students[i].name, students[i].score);
        }
    }
}

// Function to search for a student in the record
void searchStudent() {
    int id;
    printf("Enter student ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < student_count; i++) {
        if (students[i].id == id) {
            printf("Student found: ID=%d, Name=%s, Score=%.2f\n", students[i].id, students[i].name, students[i].score);
            return;
        }
    }
    printf("Student not found in the record.\n");
}

// Function to delete a student from the record
void deleteStudent() {
    int id;
    printf("Enter student ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < student_count; i++) {
        if (students[i].id == id) {
            for (int j = i; j < student_count - 1; j++) {
                students[j] = students[j + 1];
            }
            student_count--;
            printf("Student deleted successfully!\n");
            return;
        }
    }
    printf("Student not found in the record.\n");
}

int main() {
    int choice;

    do {
        printf("\n===== Student Record System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
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
                deleteStudent();
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}