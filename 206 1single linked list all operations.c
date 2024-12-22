//
// Created by 12san on 17-12-2024.
//
#include<stdio.h>
#include<stdlib.h>

//node structure
struct node{
    int data;
    struct node* next;
};

//creates a type alias n for struct node
typedef struct node n;

//function to create a new node
n* create(int value){
    n* newNode=(n*)malloc(sizeof(n));
    if(!newNode){
        printf("Memory allocation failed!");
        exit(1);
}
    newNode->data=value;
    newNode->next=NULL;
    return newNode;
}

//function to insert in the beginning
void insertAtBeginning(n** head,int value){
    n* newNode=create(value);
    newNode->next=*head;
    *head=newNode;
}

//function to insert at the end
void insertAtend(n** head,int value){
    n* newNode= create(value);
    if(*head==NULL){
        *head=newNode;
        return;
    }
    n* temp=*head;
    while(temp->next !=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}

//function to insert after a given node
void insertAfter(n* head,int target,int value) {
    n *temp = head;
    while (temp && temp->data !=target) {          //When the linked list ends, the pointer temp becomes NULL. Trying to access temp->data or temp->next on a NULL pointer would cause a segmentation fault (program crash).
        temp = temp->next;
    }
    if (temp) {
        n* newNode = create(value);
        newNode->next = temp->next;
        temp->next = newNode;
    } else
        printf("Target value %d not found in the list\n", target);
}

//function to delete in the beginning
void deletebegin(n** head) {
    if (*head == NULL) {
        printf("List is Empty\n");
        return;
    }
    n* temp = *head;
    *head = (*head)->next;
    free(temp);
}

//function to delete at the end
void deletefromend(n** head) {
    if (*head == NULL) {
        printf("List is Empty\n");
        return;
    }
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }
    n* temp = *head;
    while (temp->next->next !=NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

//function to delete the specific value
void delete(int value,n** head) {
    if (*head == NULL) {
        printf("List is Empty\n");
        return;
    }
    if ((*head)->data == value) {
        n* temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }
    n* temp = *head;
    while (temp->next && temp->next->data != value) {
        temp = temp->next;
    }
    if (temp->next) {
        n* y = temp->next;
        temp->next = temp->next->next;
        free(y);
    } else
        printf("Value %d is not found", value);
}

//function to sort the list
void Sortlist(n** head) {
    if (*head == NULL) {
        return;
    }
    n* i;
    n* j;
    for (i = *head; i != NULL; i=i->next) {
        for (j = i->next; j != NULL; j=j->next) {     //bubble sort
            if (i->data > j->data) {
                int temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}

//function to delete the entire list
void deletelist(n** head) {
    n* temp = *head;
    while (temp) {
        n* next = temp->next;
        free(temp);
        temp = next;        //continuing the delete process next is updated
    }
    *head = NULL;
}

//function of display the list
void display(n* head) {
    if (head == NULL) {
        printf("list is empty");
        return;
    }
    n* temp = head;
    while (temp) {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

//user interaction and main function
void userInput(n** head) {
    int choice, data, target;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert after a value\n");
        printf("4. Delete from Beginning\n");
        printf("5. Delete from End\n");
        printf("6. Delete a value\n");
        printf("7. Sort the list\n");
        printf("8. Display the list\n");
        printf("9. Delete the entire list\n");
        printf("10.Exit\n");
        printf("Enter the choice\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter data to insert at the beginning:\n");
                scanf("%d", &data);
                insertAtBeginning(head, data);
                break;
            case 2:
                printf("Enter the data at the End\n");
                scanf("%d", &data);
                insertAtend(head, data);
                break;
            case 3:
                printf("Enter the target value after which to insert\n");
                scanf("%d", &target);
                printf("Enter the value:\n");
                scanf("%d", &data);
                insertAfter(*head, target, data);
                break;
            case 4:
                deletebegin(head);
                break;
            case 5:
                deletefromend(head);
                break;
            case 6:
                printf("Enter the value to delete:\n");
                scanf("%d", &data);
                delete(data, head);
                break;
            case 7:
                Sortlist(head);
                break;
            case 8:
                display(*head);
                break;
            case 9:
                deletelist(head);
                break;
            case 10:
                exit(0);
            default:
                printf("Invalid Choice.Please try again\n");
        }

    }
}
    int main(){
        n* head=NULL;
        userInput(&head);
        return 0;
    }
