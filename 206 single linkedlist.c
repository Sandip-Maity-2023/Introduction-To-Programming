//
// Created by 12san on 16-12-2024.
//
#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

typedef struct Node Node;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation error\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert at the beginning
void insertAtBeginning(Node** head, int data) {
    Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// Function to insert at the end
void insertAtEnd(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to insert after a given value
void insertAfter(Node* head, int target, int data) {
    Node* temp = head;
    while (temp && temp->data != target) {
        temp = temp->next;
    }
    if (temp) {
        Node* newNode = createNode(data);
        newNode->next = temp->next;
        temp->next = newNode;
    } else {
        printf("Target value %d not found in the list.\n", target);
    }
}

// Function to delete from the beginning
void deleteFromBeginning(Node** head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }
    Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

// Function to delete from the end
void deleteFromEnd(Node** head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }
    Node* temp = *head;
    while (temp->next->next) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

// Function to delete a specific value
void deleteValue(Node** head, int value) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }
    if ((*head)->data == value) {
        Node* temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }
    Node* temp = *head;
    while (temp->next && temp->next->data != value) {
        temp = temp->next;
    }
    if (temp->next) {
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        free(toDelete);
    } else {
        printf("Value %d not found in the list.\n", value);
    }
}

// Function to sort the linked list
void sortList(Node** head) {
    if (*head == NULL) {
        return;
    }
    Node* i;
    Node* j;
    for (i = *head; i != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->data > j->data) {
                int temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}

// Function to delete the entire list
void deleteList(Node** head) {
    Node* current = *head;
    Node* next;
    while (current) {
        next = current->next;
        free(current);
        current = next;
    }
    *head = NULL;
}

// Function to display the list
void displayList(Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    Node* temp = head;
    while (temp) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to handle user input
void userInput(Node** head) {
    int choice, data, target;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert After a Value\n");
        printf("4. Delete from Beginning\n");
        printf("5. Delete from End\n");
        printf("6. Delete a Value\n");
        printf("7. Sort the List\n");
        printf("8. Display the List\n");
        printf("9. Delete Entire List\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert at the beginning: ");
                scanf("%d", &data);
                insertAtBeginning(head, data);
                break;
            case 2:
                printf("Enter data to insert at the end: ");
                scanf("%d", &data);
                insertAtEnd(head, data);
                break;
            case 3:
                printf("Enter the target value after which to insert: ");
                scanf("%d", &target);
                printf("Enter data to insert: ");
                scanf("%d", &data);
                insertAfter(*head, target, data);
                break;
            case 4:
                deleteFromBeginning(head);
                break;
            case 5:
                deleteFromEnd(head);
                break;
            case 6:
                printf("Enter the value to delete: ");
                scanf("%d", &data);
                deleteValue(head, data);
                break;
            case 7:
                sortList(head);
                break;
            case 8:
                displayList(*head);
                break;
            case 9:
                deleteList(head);
                break;
            case 10:
                deleteList(head);
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

int main() {
    Node* head = NULL;
    userInput(&head);
    return 0;
}

