/* Q114 Write a program to Create menu-driven array
operations system. */

#include <stdio.h>
#define MAX_SIZE 100    

int arr[MAX_SIZE];
int size = 0;

// Function to add an element to the array
void addElement() {
    if (size < MAX_SIZE) {
        printf("Enter the element to add: ");
        scanf("%d", &arr[size]);
        size++;
        printf("Element added successfully!\n");
    } else {
        printf("Array is full. Cannot add more elements.\n");
    }
}

// Function to display the array
void displayArray() {
    if (size == 0) {
        printf("Array is empty.\n");
    } else {
        printf("Array elements: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}

// Function to search for an element in the array
void searchElement() {
    int element;
    printf("Enter the element to search: ");
    scanf("%d", &element);

    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            printf("Element found at index %d.\n", i);
            return;
        }
    }
    printf("Element not found in the array.\n");
}

// Function to delete an element from the array
void deleteElement() {
    int element;
    printf("Enter the element to delete: ");
    scanf("%d", &element);

    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            for (int j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            size--;
            printf("Element deleted successfully!\n");
            return;
        }
    }
    printf("Element not found in the array.\n");
}

int main() {
    int choice;

    do {
        printf("\n===== Array Operations System =====\n");
        printf("1. Add Element\n");
        printf("2. Display Array\n");
        printf("3. Search Element\n");
        printf("4. Delete Element\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addElement();
                break;
            case 2:
                displayArray();
                break;
            case 3:
                searchElement();
                break;
            case 4:
                deleteElement();
                break;
            case 5:
                printf("Thank You!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}