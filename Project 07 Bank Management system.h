//
// Created by 12san on 17-08-2024.
/*
1.
 &acc: This is a pointer to the data to be written. The acc variable holds the data (it could be a structure or any other type of variable), and &acc is the address of that data.

sizeof(acc): This specifies the size of each element to be written, in bytes. In this case, it represents the size of the acc variable. For instance, if acc is a structure, sizeof(acc) will return the size of that structure in memory.

1: This is the number of elements to write. In this case, you're writing one element (i.e., one instance of acc).

fp: This is a pointer to a FILE object, which represents the file to which the data is written. fp must be previously opened using fopen.
*/

#ifndef INTRODUCTION_TO_PROGRAMMING_PROJECT_07_BANK_MANAGEMENT_SYSTEM_H
#define INTRODUCTION_TO_PROGRAMMING_PROJECT_07_BANK_MANAGEMENT_SYSTEM_H

#endif //INTRODUCTION_TO_PROGRAMMING_PROJECT_07_BANK_MANAGEMENT_SYSTEM_H

#include<stdio.h>
#include<stdlib.h>

void check_balance(char*);
void create_account();
void created();
void check_balance(char*){

}



struct account{
    char username[30];
    char fname[20],lname[20];
    char father[40];
    char address[30];
    char accountType[20];
    char pnumber[15];
    char aadhaar[30];
    int date,month,year;
    float balance;
    char email[40];

};
//function to create new account
void create_account(){

    struct account new;

    char password[20];
    printf("\tCreate a new account:\n");
    printf("Enter First name:\n");
    scanf("%s",new.fname);

    printf("Enter last name:\n");
    scanf("%s",new.lname);

    printf("Enter Father's name:\n");
    scanf("%s",new.father);

    printf("Address:\n");
    scanf("%s",new.address);

    printf("Account Type:\n");
    scanf("%s",new.accountType);

    printf("Enter Date of Birth:(DD MM YYYY):\n");
    scanf("%d %d %d",new.date,new.month,new.year);

    printf("Aadhaar number:\n");
    scanf("%s",new.aadhaar);

    printf("Phone no:\n");
    scanf("%s",new.pnumber);

    printf("Email Id:\n");
    scanf("%s",new.email);

    printf("Username:\n");
    scanf("%d",new.username);

    printf("Password:\n");
    //passwordInput(password,20);
new.balance=0.0;
                            //open file
    FILE *fp;
    fp=fopen("accounts.dat","ab");  // Open for append in binary mode. Data is added to the end of the file. If the file does not exist, it will be created.


    if(!fp){
        printf("Error opening file! ");
        return;
    }
    fwrite(&new,sizeof(new),1,fp);
    fclose(fp);

    created();
}

//Function to mask the input for password
void passwordInput(char* password,int max_length){
    int i;
    char ch;
    for(i=0;i<max_length;i++){
        if(ch!=13){
            password[i]=ch;
            printf("*");
        }else{
            password[i]='\0';
            break;
        }
    }

}

void created(){

}

