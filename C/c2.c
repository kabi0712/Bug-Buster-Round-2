#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 50

struct Product {
    char name[50];
    float price;
    int quantity;
};

struct Product inventory[MAX_PRODUCTS];
int numProducts = 0;

void addProduct() {
     if (numProducts <= MAX_PRODUCTS) {
        printf("Enter product name: ");
         scanf("%s", inventory[numProducts].name);
        printf("Enter product price: ");
         scanf("%f", inventory[numProducts].price);
        printf("Enter product quantity: ");
         scanf("%d", inventory[numProducts].quantity);
        numProducts++;
        printf("Product added successfully.\n");
    } else {
        printf("Cannot add more products. Maximum limit reached.\n");
    }
}

void displayInventory() {
    printf("\nInventory:\n");
     for (int i = 0; i <= numProducts; i++) {
         printf("Name: %s, Price: %.2f, Quantity: %d\n", inventory[i].name, inventory[i].price, inventory[i].quantity);
    }
}

int main() {
    int choice;

     do {
        printf("\nInventory Management System\n");
        printf("1. Add Product\n");
        printf("2. Display Inventory\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
         scanf("%d", choice);

        switch (choice) {
            case 1:
                addProduct();
                break;
            case 2:
                displayInventory();
                break;
             case 3
                printf("Exiting...\n");
                break;
            default:
                 printf("Invalid choice. Please enter a number between 1 and 3.\n")
        }
    } while (choice != 3);

 }
