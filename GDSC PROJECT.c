#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

// Structure to store donor information
struct Donor {
    char name[50];
    char dob[15];
};

// Function prototypes
void addDonor(struct Donor donors[], int *numDonors);
void searchDonor(struct Donor donors[], int numDonors, char letter, char dob[]);
void processDonation(char *name);

int main() {
    struct Donor donors[MAX_SIZE];
    int numDonors = 0;
    char choice;

    do {
        printf("\nMenu:\n");
        printf("1. Add Donor\n");
        printf("2. Search Donor\n");
        printf("3. Donate ₹1\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                addDonor(donors, &numDonors);
                break;
            case '2':
                printf("Enter the first letter of the name to search: ");
                char letter;
                scanf(" %c", &letter);

                char dob[15];
                printf("Enter the date of birth (DD/MM/YYYY) to search: ");
                scanf("%s", dob);

                searchDonor(donors, numDonors, letter, dob);
                break;
            case '3':
                printf("Scan the QR code to donate ₹1: ");
                char qrCode[100];
                scanf("%s", qrCode);

                char name[100];
                printf("Enter your name: ");
                scanf(" %[^\n]s", name);

                processDonation(name);
                break;
            case '4':
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != '4');

    return 0;
}

// Function to add a new donor
void addDonor(struct Donor donors[], int *numDonors) {
    if (*numDonors < MAX_SIZE) {
        printf("Enter the name of the donor: ");
        scanf("%s", donors[*numDonors].name);

        printf("Enter the date of birth (DD/MM/YYYY) of the donor: ");
        scanf("%s", donors[*numDonors].dob);

        (*numDonors)++;
        printf("Donor added successfully.\n");
    } else {
        printf("Maximum donor limit reached. Cannot add more donors.\n");
    }
}

// Function to search for donors based on the first letter of their name and date of birth
void searchDonor(struct Donor donors[], int numDonors, char letter, char dob[]) {
    int found = 0;
    printf("Donors with names starting with '%c' and date of birth '%s':\n", letter, dob);
    for (int i = 0; i < numDonors; i++) {
        if (donors[i].name[0] == letter && strcmp(donors[i].dob, dob) == 0) {
            printf("%s\n", donors[i].name);
            found = 1;
        }
    }
    if (!found) {
        printf("No matching donors found.\n");
    }
}

// Function to process the donation transaction
void processDonation(char *name) {
    // Simulate transaction details
    printf("Transaction Details\nAmount: ₹1\nStatus: Successful\n");
    printf("Thank you, %s, for your donation!\n", name);
    printf("You are now a donor of the donation fund that will help those in distress.\n");
}
