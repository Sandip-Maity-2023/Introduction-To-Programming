//
// Created by 12san on 21-02-2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to process the donation transaction
void processDonation(char *name) {
    // Simulate transaction details
    printf("Transaction Details\nAmount: ₹1\nStatus: Successful\n");
    printf("Thank you, %s, for your donation!\n", name);
    printf("You are now a donor of the donation fund that will help those in distress.\n");
}

int main() {
    char qrCode[100];
    char name[100];

    // Prompt the user to scan the QR code
    printf("Scan the QR code to donate ₹1: ");
    scanf("%s", qrCode);

    // Prompt the user to enter their name
    printf("Enter your name: ");
    scanf(" %[^\n]s", name);

    // Validate the QR code (for simplicity, we skip validation in this example)

    // Process the donation
    processDonation(name);

    return 0;
}
