#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Product {
    int id;
    char name[100];
    float price;
} Product;

int main() {
    // Define a fixed number of products
    int n = 3;

    // Create an array of Product structures
    Product products[n];

    // Store product details
    for (int i = 0; i < n; i++) {
        printf("\nEnter product %d details:\n", i + 1);

        printf("Enter product ID: ");
        scanf("%d", &products[i].id);

        printf("Enter product name: ");
        scanf("%s", products[i].name);

        printf("Enter product price: ");
        scanf("%f", &products[i].price);
    }

    // Search options
    int choice;
    do {
        printf("\nSelect search option:\n");
        printf("1. Search by ID\n");
        printf("2. Search by name\n");
        printf("0. Exit\n");

        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int idToSearch;
                printf("Enter product ID to search: ");
                scanf("%d", &idToSearch);

                int found = 0;
                for (int i = 0; i < n; i++) {
                    if (products[i].id == idToSearch) {
                        printf("\nProduct found:\n");
                        printf("  ID: %d\n", products[i].id);
                        printf("  Name: %s\n", products[i].name);
                        printf("  Price: %.2f\n", products[i].price);

                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Product with ID %d not found\n", idToSearch);
                }

                break;
            }

            case 2: {
                char nameToSearch[100];
                printf("Enter product name to search: ");
                scanf("%s", nameToSearch);

                int found = 0;
                for (int i = 0; i < n; i++) {
                    if (strcmp(products[i].name, nameToSearch) == 0) {
                        printf("\nProduct found:\n");
                        printf("  ID: %d\n", products[i].id);
                        printf("  Name: %s\n", products[i].name);
                        printf("  Price: %.2f\n", products[i].price);

                        found = 1;
                    }
                }

                if (!found) {
                    printf("Product with name '%s' not found\n", nameToSearch);
                }

                break;
            }

            case 0:
                printf("Exiting search options\n");
                break;

            default:
                printf("Invalid choice\n");
        }
    } while (choice != 0);

    return 0;
}
