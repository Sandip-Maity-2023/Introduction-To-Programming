//
// Created by 12san on 23-07-2024.
//

#include "PROJECT 05 Bus booking system.h"

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    //initialize user data

    struct User users[5]={
        {"user1","password1"},{"user2","password2"},{"user3","password3"},{"user4","password4"},{"user5","password5"}

    };
    int numUsers=5;

    //initialize bus data

    struct Bus buses[3]={
        {101,"city A","city B",50,50,25.0},
        {102,"city B","city D",40,40,20.0},
        {103,"city E","city F",30,30,15.0},
    };

    int numBuses=3;

    struct Passenger passengers[500];  //array to store passengers information
    int numPassengers=0;    //number of passengers

    int loggedInUserId=-1; //index of the logged in user

    while(1){
        if(loggedInUserId==-1){
displayMainMenu();
int choice;
scanf("%d",&choice);

if(choice==1){
    char username[50];
    char password[50];

    printf("Enter username:\n");
    scanf("%s", username);
    printf("Enter password:\n");
    scanf("%s", password);

    loggedInUserId= loginUser(users,numUsers,username,password);
        if(loggedInUserId==-1){
            printf("Login failed. please check" "your username and password.\n");

        }else{
            printf("Login successful.welcome,%s!\n",username);

        }
        }
        else if(choice==2){
            printf("Existing the program\n");
            break;

        }else{
            printf("Invalid choice. Please try again\n");

        }
}
else{
    displayUserMenu();
    int userChoice;
    printf("Enter the user choice:\n");
    scanf("%d", &userChoice);

    switch(userChoice){
        case 1:
        bookTicket(buses, numBuses, passengers, &numPassengers,loggedInUserId);
        break;

        case 2:
        cancelTicket(buses,numBuses,passengers,&numPassengers,loggedInUserId);
        break;

        case 3:
        checkBusStatus(buses,numBuses,loggedInUserId);
        break;

        case 4:
        printf("Logging out.\n");
        loggedInUserId=-1;
        break;

        default:
        printf("Invalid choice...,please try again!\n");

    }
}
        }
        return 0;
    }