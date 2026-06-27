/* Q119 Write a program to Create mini employee
management system. */

#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100
#define MAX_NAME_LENGTH 100
#define MAX_DEPARTMENT_LENGTH 100

typedef struct {
    int id;
    char name[MAX_NAME_LENGTH];
    char department[MAX_DEPARTMENT_LENGTH];
    float salary;
} Employee;

Employee employees[MAX_EMPLOYEES];
int employee_count = 0;

// Function to add an employee to the system
void addEmployee() {
    if (employee_count < MAX_EMPLOYEES) {
        printf("Enter employee ID: ");
        scanf("%d", &employees[employee_count].id);
        printf("Enter employee name: ");
        scanf("%s", employees[employee_count].name);
        printf("Enter employee department: ");
        scanf("%s", employees[employee_count].department);
        printf("Enter employee salary: ");
        scanf("%f", &employees[employee_count].salary);
        employee_count++;
        printf("Employee added successfully!\n");
    } else {
        printf("Employee database is full. Cannot add more employees.\n");
    }
}

// Function to display the employee directory
void displayEmployees() {
    if (employee_count == 0) {
        printf("No employees in the database.\n");
    } else {
        printf("Employee Directory:\n");
        printf("ID\tName\t\t\tDepartment\t\tSalary\n");
        for (int i = 0; i < employee_count; i++) {
            printf("%d\t%s\t\t%s\t\t%.2f\n", employees[i].id, employees[i].name, employees[i].department, employees[i].salary);
        }
    }
}

// Function to search for an employee in the system
void searchEmployee() {
    int id;
    printf("Enter employee ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < employee_count; i++) {
        if (employees[i].id == id) {
            printf("Employee found: ID=%d, Name=%s, Department=%s, Salary=%.2f\n", employees[i].id, employees[i].name, employees[i].department, employees[i].salary);
            return;
        }
    }
    printf("Employee not found in the database.\n");
}

// Function to delete an employee from the system
void deleteEmployee() {
    int id;
    printf("Enter employee ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < employee_count; i++) {
        if (employees[i].id == id) {
            for (int j = i; j < employee_count - 1; j++) {
                employees[j] = employees[j + 1];
            }
            employee_count--;
            printf("Employee deleted successfully!\n");
            return;
        }
    }
    printf("Employee not found in the database.\n");
}

int main() {
    int choice;

    do {
        printf("\n===== Mini Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Delete Employee\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                searchEmployee();
                break;
            case 4:
                deleteEmployee();
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