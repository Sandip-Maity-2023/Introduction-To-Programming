//
// Created by 12san on 18-12-2024.
//
#include<stdio.h>
#include<stdlib.h>

//structure of node
typedef struct node{
    int data;
    struct node* next;
}node;   //instead of using whole structure, node can be used

//function to create a newnode
node* create(int data){
    node* newNode=(node*) malloc(sizeof(node));
    if(!newNode){
        printf("Memory allocation failed\n");
        return NULL;
    }
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

//function to insert a node in the beginning
node* insertAtBeginning(node* tail,int data){
    node* newNode= create(data);     //creation
    if(!tail){
        newNode->next=newNode;    //point to itself
           return newNode;
    }
    newNode->next=tail->next;   //address part
    tail->next=newNode;         //value part
    return tail;
}

//function to insert a node at the end
node* insertAtEnd(node* tail,int data){
    node* newNode=create(data);
    if(!tail){
        newNode->next=newNode;
        return newNode;
    }
    newNode->next=tail->next;
    tail->next=newNode;
    return newNode;
}

//function to delete a node from the beginning
node* deleteAtBegin(node* tail){
    if(!tail){
        printf("List is Empty\n");
        return NULL;
    }
    node* temp=tail->next;
    if(tail==tail->next){
        free(temp);
        return NULL;
    }
        tail->next=temp->next;
    printf("Deleted : %d",temp->data);
        free(temp);
        return tail;
    }


//function to delete a node at the end
node* deleteAtEnd(node* tail){
    if(!tail){
        printf("List is NOT Empty\n");  //empty list
        return NULL;
    }
    node* current=tail->next;                      //if there is single node then current as tail->next
    while(tail==tail->next){                      //as single node tail means tail->next checking
        printf("Deleted: %d\n",tail->data);
        free(tail);
        return NULL;
    }
    while(current->next !=tail){               //multiple node consider last node's tail, 10->20->30->40 it stops at 20, then last node is 30 it links with 10 ,safe delete  of 40
        current=current->next;
    }
    current->next=tail->next;
    printf("Deleted: %d",tail->data);
    free(tail);
    return current;
}

//function to display the circular linked list
void display(node* tail){
    if(!tail){
        printf("List is Empty\n");
    }
    node* temp=tail->next;
    printf("Circular Linked list\n");
    do{
        printf("%d\t\a",temp->data);
        temp=temp->next;
    }while(temp !=tail->next);   //tail->next=tail->next
}
//main function
int main(){
node* tail=NULL;
int choice, data;
while(1) {
    printf("\n1. Insert at the Beginning\n");
    printf("2. Insert at the End\n");
    printf("3. Delete at the begin\n");
    printf("4. Delete at the End\n");
    printf("5. Display\n");
    printf("6. Exit\n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter data:\n");
            scanf("%d", &data);
            tail = insertAtBeginning(tail, data);
            break;
        case 2:
            printf("Enter data:\n");
            scanf("%d", &data);
            tail = insertAtEnd(tail, data);
            break;
        case 3:
            tail = deleteAtBegin(tail);
            break;
        case 4:
            tail = deleteAtEnd(tail);
            break;
        case 5:
            display(tail);
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid Input\n");
    }
}
return 0;
}
