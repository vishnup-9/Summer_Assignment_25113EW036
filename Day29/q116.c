/* Q116 Write a program to Create inventory
management system. */

#include <stdio.h>
#define MAX_ITEMS 100

typedef struct {
    int id;
    char name[50];
    int quantity;
    float price;
} Item;

Item inventory[MAX_ITEMS];
int item_count = 0;

// Function to add an item to the inventory
void addItem() {
    if (item_count < MAX_ITEMS) {
        printf("Enter item ID: ");
        scanf("%d", &inventory[item_count].id);
        printf("Enter item name: ");
        scanf("%s", inventory[item_count].name);
        printf("Enter item quantity: ");
        scanf("%d", &inventory[item_count].quantity);
        printf("Enter item price: ");
        scanf("%f", &inventory[item_count].price);
        item_count++;
        printf("Item added successfully!\n");
    } else {
        printf("Inventory is full. Cannot add more items.\n");
    }
}

// Function to display the inventory
void displayInventory() {
    if (item_count == 0) {
        printf("Inventory is empty.\n");
    } else {
        printf("Inventory:\n");
        printf("ID\tName\tQuantity\tPrice\n");
        for (int i = 0; i < item_count; i++) {
            printf("%d\t%s\t%d\t%.2f\n", inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
        }
    }
}

// Function to search for an item in the inventory
void searchItem() {
    int id;
    printf("Enter item ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < item_count; i++) {
        if (inventory[i].id == id) {
            printf("Item found: ID=%d, Name=%s, Quantity=%d, Price=%.2f\n", inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
            return;
        }
    }
    printf("Item not found in the inventory.\n");
}

// Function to delete an item from the inventory
void deleteItem() {
    int id;
    printf("Enter item ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < item_count; i++) {
        if (inventory[i].id == id) {
            for (int j = i; j < item_count - 1; j++) {
                inventory[j] = inventory[j + 1];
            }
            item_count--;
            printf("Item deleted successfully!\n");
            return;
        }
    }
    printf("Item not found in the inventory.\n");
}

int main() {
    int choice;

    do {
        printf("\n===== Inventory Management System =====\n");
        printf("1. Add Item\n");
        printf("2. Display Inventory\n");
        printf("3. Search Item\n");
        printf("4. Delete Item\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addItem();
                break;
            case 2:
                displayInventory();
                break;
            case 3:
                searchItem();
                break;
            case 4:
                deleteItem();
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