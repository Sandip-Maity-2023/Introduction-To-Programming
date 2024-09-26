//
// Created by 12san on 22-07-2024.
//

#include "Project 04 Telephone Billing System.h"
#include<stdio.h>

int main(){
    int choice;
    char phoneNumber[15];
    while(1){
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                addRecord();
                break;
            case 2:
                viewRecords();
                break;
            case 3:
                printf("\nEnter your phone number to modify record:");
                scanf("%s",phoneNumber);
                modifyRecords(phoneNumber);
                break;
            case 4:
                printf("Enter the phone number to view payment:");
                scanf("%s",phoneNumber);
                viewPayment(phoneNumber);
                break;
            case 5:
                printf("Enter phone number to delete record:\n");
                scanf(" %s", phoneNumber);
                deleteRecords(phoneNumber);
                break;
            case 6:
                return 0;
            default:
                printf("\n Invalid choice ! Please try again\n");
        }
    }
}