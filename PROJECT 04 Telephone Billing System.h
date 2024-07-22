//
// Created by 12san on 22-07-2024.
//

#ifndef INTRODUCTION_TO_PROGRAMMING_PROJECT_04_TELEPHONE_BILLING_SYSTEM_H
#define INTRODUCTION_TO_PROGRAMMING_PROJECT_04_TELEPHONE_BILLING_SYSTEM_H

#endif //INTRODUCTION_TO_PROGRAMMING_PROJECT_04_TELEPHONE_BILLING_SYSTEM_H

#include<stdio.h>
#include<string.h>


struct Customer{
    char name[30];
    char phoneNumber[14];
    float usage;
    float totalBill;
};
struct Customer customers[100];
int customerCount=0;



void addRecord(){
    if(customerCount<100){
        printf("Enter name:");
        getchar();                 //clear the newline character left in the buffer
        fgets(customers[customerCount].name,sizeof(customers[customerCount].name),stdin);         //fgets read up to `sizeof(customers[customerCount].name)
        customers[customerCount].name[strcspn(customers[customerCount].name,"\n")]='\0';  //remove the newline character       `strcspn` function calculates the length of the initial segment of customers[customerCount].name

       // scanf("%[^\n]s",customers[customerCount].name);
        printf("Enter phone Number:");
        scanf("%s", customers[customerCount].phoneNumber);      //do not require `&` for store of phone number
        printf("Enter usage[in minutes]:");
        scanf("%f",&customers[customerCount].usage);

        customers[customerCount].totalBill=customers[customerCount].usage*2;
        customerCount++;
        printf("Record added successfully");

    }else{
        printf("Maximum number of records reached");
    }
}




void viewRecords(){
    printf("Name\t\tPhone Number\t\tUsage\t\tTotal Bill(rupees)\n");
    for(int i=0;i<customerCount;i++){
        printf("%s\n%s\n%.2f\n%.2f\n",customers[i].name,customers[i].phoneNumber,customers[i].usage,customers[i].totalBill);
    }
}





void modifyRecords(char phoneNumber[]) {
    for (int i = 0; i < customerCount; i++) {
        if (strcmp(customers[i].phoneNumber, phoneNumber) == 0) {
            printf("Enter new name for %s(leave empty to keep current):\n ",customers[customerCount].name);
            getchar();  // clear the newline character left in the buffer
            char newName[30];
            fgets(newName,sizeof(newName),stdin);
            if(strcmp(newName,"\n") !=0){
                strcpy(customers[i].name,newName);
            }


            printf("Enter new phone number for %s(leave empty to keep current value):\n",customers[customerCount].name);
            char newPhoneNumber[14];
            fgets(newPhoneNumber,sizeof(newPhoneNumber),stdin);
            if(strcmp(newPhoneNumber,"\n") !=0) {
                newPhoneNumber[strcspn(newPhoneNumber, "\n")] = '\0';
                strcpy(customers[i].phoneNumber, newPhoneNumber);
            }

            printf("Enter new usage(in minutes) for %s:", customers[i].name);
            scanf("%f", &customers[i].usage);
            customers[i].totalBill = customers[i].usage * 2;
            printf("Record modified successfully\n");
            return;
        }
    }
    printf("Record not found!\n");
}




void viewPayment(char phoneNumber[]){
    for(int i=0;i<customerCount;i++) {
        if (strcmp(customers[i].phoneNumber, phoneNumber) == 0) {
            printf("Total Bill for %s : ₹%.2f\n", customers[i].name, customers[i].totalBill);
            return;
        }
    }
    printf("Record not found\n");

}



void searchRecord(char phoneNumber[]){
    printf("Name\tPhone Number\tUsage(min)\tTotal Bill(₹`\u20B9`)\n");     //unicode value for ₹ rupees sign \u20B9
    for(int i=0;i<customerCount;i++) {
        if(strcmp(customers[i].phoneNumber,phoneNumber)==0){
        printf("%s\t%s\t%f\t%.2f\n", customers[i].name, customers[i].phoneNumber, customers[i].usage,
               customers[i].totalBill);
        return;
    }
}
printf("\nRecord not found!\n");
}



void deleteRecords(char phoneNumber[]){
    for(int i=0;i<customerCount;i++){
        if(strcmp(customers[i].phoneNumber,phoneNumber)==0){
            for(int j=0;j<customerCount;j++){
                customers[j]=customers[j+1];
            }
            customerCount--;
            printf("Record deleted successfully!");
            return;
        }
    }
    printf("Record not found!");
}




void displayMenu(){
    printf("\n1. Add New Record\n");
    printf("2. view List of Records\n");
    printf("3. Modify Records(usage)\n");
    printf("4. View Payments\n");
    printf("5. Delete Records\n");
    printf("6. Edit Name\n");
    printf("7. Edit Number\n");
    printf("8. Exit\n");
}











