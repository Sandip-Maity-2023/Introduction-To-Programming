//
// Created by 12san on 17-12-2024.
//
/*
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct node {
    int data;
    struct node *prev;
    struct node *next;
} node;

//function to create a newnode
struct node *create(struct node *start) {
    struct node *newnode, *ptr;
    int num;
    printf("-1 to end:\n");
    printf("Enter the data:\n");
    scanf("%d", &num);
    newnode = (struct node *) malloc(sizeof(struct node));
    newnode->data = num;
    newnode->next = NULL;
    while (num != -1) {
        if (start == NULL) {
            newnode->prev = NULL;
            start = newnode;
        } else {
            ptr = start;
            while (ptr->next != NULL) {
                ptr = ptr->next;
            }
            ptr->next = newnode;
            newnode->prev = ptr;
        }
        printf("Enter the data:\n");
        scanf("%d",&num);
    }
    return start;
}
//function to display the list
node *display(node *start) {
    node *ptr = start;
    if (ptr == NULL) {
        printf("List is Empty\n");
        return start;
    }
    printf("Doubly linked list:\n");
    while (ptr != NULL) {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    return start;
}

//function to insert at the beginning
node *insertAtBegin(node *start) {
    int num;
    node *newnode;
    printf("Enter the data:\n");
    scanf("%d", &num);
    newnode = (struct node *) malloc(sizeof(struct node));
    newnode->data = num;
    newnode->prev = NULL;
    newnode->next = start;
    if(start !=NULL){
        start->prev=newnode;
    }
    start = newnode;
    return start;
}

//function to insert at the end
node *insertAtEnd(struct node *start) {
    int num;
    struct node *newnode, *ptr;
    printf("Enter the data:\n");
    scanf("%d", &num);
    newnode = (struct node *) malloc(sizeof(struct node));
    newnode->data = num;
    ptr = start;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = newnode;
    newnode->prev = ptr;
    newnode->next = NULL;

    return start;
}

//function to insert before the node
struct node *insert_before(struct node *start) {
    struct node *newnode, *ptr;
    int num, val;
    printf("Enter the data:\n");
    scanf("%d", &num);
    printf("Enter the data before which value have to insert:\n");
    scanf("%d", &val);
    newnode = (struct node *) malloc(sizeof(struct node));
    newnode->data = num;
    ptr = start;
    while (ptr->next != val) {
        ptr = ptr->next;
    }
    newnode->next = ptr;
    newnode->prev = ptr->prev;
    ptr->prev->next = newnode;
    ptr->prev = newnode;
    return start;
}

//function to insert after the node
struct node *insert_after(struct node *start) {
    struct node *newnode, *ptr;
    newnode = (struct node *) malloc(sizeof(struct node));
    int num, target;
    printf("Enter the data:\n");
    scanf("%d", &num);
    printf("Enter the node after the node inserted:\n");
    scanf("%d", &target);
    newnode->data = num;
    start = ptr;
    while (ptr->next != target) {
        ptr = ptr->next;
    }
    newnode->next = ptr->next;
    newnode->prev = ptr;
    ptr->next = newnode;
    ptr->next->prev = newnode;
    return start;
}

//function to delete at the beginning
struct node *delete_begin(struct node *start) {
    struct node *ptr;
    ptr = start;
    start = start->next;
    start->prev = NULL;
    free(ptr);
    return start;
}

//function to delete at the end
struct node *delete_end(struct node *start) {
    struct node *ptr;
    ptr = start;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->prev->next = NULL;
    free(ptr);
    return start;
}

//function to delete after the node
struct node *delete_after(struct node *start) {
    struct node *ptr, *temp;
    ptr = start;
    int num;
    printf("Enter the node after which the node has to deleted:\n");
    scanf("%d", &num);
    while (ptr->data != num) {
        ptr = ptr->next;
    }
    temp = ptr->next;
    ptr->next = temp->next;
    temp->next->prev = ptr;
    free(temp);
    return start;
}

//function to delete before the node
struct node *delete_before(struct node *start){
    struct node *ptr,*temp;
    int num;
    printf("Enter the node to delete before the node:\n");
    scanf("%d",&num);
    start=ptr;
    while(ptr->data !=num){
        ptr=ptr->next;
    }
    temp=ptr->prev;
    if(temp==start){
        start= delete_begin(start);
    }else{
        ptr->prev=temp->prev;
        temp->prev->next=ptr;
    }
    free(temp);
    return start;
}

//delete the list
struct node *delete_list(struct node *start){
    while(start !=NULL){
        start= delete_begin(start);
    }
    return start;
}
int main() {
    struct node *start=NULL;
        int choice, data, target;
        while (1) {
            printf("\nMenu:\n");
            printf("1. Create a list:\n");
            printf("2. Display the list\n");
            printf("3. Add the node in the begin\n");
            printf("4. Add the node in the End\n");
            printf("5. Add the node before the given node\n");
            printf("6. Add the node after the given node\n");
            printf("7. Delete node at the begin\n");
            printf("8. Delete node from the end\n");
            printf("9. Delete node before the node\n");
            printf("10.Delete node after the node\n");
            printf("11.Delete the entire list\n");
            printf("12.Exit\n");
            printf("Enter the choice\n");
            scanf("%d", &choice);
            switch (choice) {
                case 1:
                    start= create(start);
                    printf("Doubly Linked list:\n");
                    break;
                case 2:
                    start= display(start);
                    break;
                case 3:
                    start= insertAtBegin(start);
                    break;
                case 4:
                    start= insert_before(start);
                    break;
                case 5:
                    start= insert_after(start);
                    break;
                case 6:
                    start=delete_begin(start);
                    break;
                case 7:
                    start= delete_end(start);
                    break;
                case 8:
                    start= delete_before(start);
                    break;
                case 9:
                    start= delete_after(start);
                    break;
                case 10:
                    start= delete_list(start);
                    break;
                case 11:
                    exit(0);
                default:
                    printf("Invalid Choice.Please try again\n");
            }

        }
    }

*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *prev;
    struct node *next;
} node;

// Function to create a new list
struct node *create(struct node *start) {
    struct node *newnode, *ptr;
    int num;
    printf("-1 to end:\n");
    printf("Enter the data:\n");
    scanf("%d", &num);
    while (num != -1) {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = num;
        newnode->next = NULL;
        if (start == NULL) {
            newnode->prev = NULL;
            start = newnode;
        } else {
            ptr = start;
            while (ptr->next != NULL) {
                ptr = ptr->next;
            }
            ptr->next = newnode;
            newnode->prev = ptr;
        }
        printf("Enter the data:\n");
        scanf("%d", &num);
    }
    return start;
}

// Function to display the list
node *display(node *start) {
    node *ptr = start;
    if (ptr == NULL) {
        printf("List is Empty\n");
        return start;
    }
    printf("Doubly linked list:\n");
    while (ptr != NULL) {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
    return start;
}

// Function to insert at the beginning
node *insertAtBegin(node *start) {
    int num;
    node *newnode;
    printf("Enter the data:\n");
    scanf("%d", &num);
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = num;
    newnode->next = start;
    newnode->prev = NULL;
    if (start != NULL)
        start->prev = newnode;
    start = newnode;
    return start;
}

// Function to insert at the end
node *insertAtEnd(struct node *start) {
    int num;
    struct node *newnode, *ptr;
    printf("Enter the data:\n");
    scanf("%d", &num);
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = num;
    newnode->next = NULL;
    if (start == NULL) {
        newnode->prev = NULL;
        start = newnode;
    } else {
        ptr = start;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = newnode;
        newnode->prev = ptr;
    }
    return start;
}

// Function to insert before a node
struct node *insert_before(struct node *start) {
    struct node *newnode, *ptr;
    int num, val;
    printf("Enter the data:\n");
    scanf("%d", &num);
    printf("Enter the value before which to insert:\n");
    scanf("%d", &val);
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = num;
    ptr = start;
    while (ptr != NULL && ptr->data != val) {
        ptr = ptr->next;
    }
    if (ptr == NULL) {
        printf("Value not found!\n");
        free(newnode);
        return start;
    }
    newnode->next = ptr;
    newnode->prev = ptr->prev;
    if (ptr->prev != NULL)
        ptr->prev->next = newnode;
    else
        start = newnode;
    ptr->prev = newnode;
    return start;
}

// Function to insert after a node
struct node *insert_after(struct node *start) {
    struct node *newnode, *ptr;
    int num, target;
    printf("Enter the data:\n");
    scanf("%d", &num);
    printf("Enter the value after which to insert:\n");
    scanf("%d", &target);
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = num;
    ptr = start;
    while (ptr != NULL && ptr->data != target) {
        ptr = ptr->next;
    }
    if (ptr == NULL) {
        printf("Value not found!\n");
        free(newnode);
        return start;
    }
    newnode->next = ptr->next;
    newnode->prev = ptr;
    if (ptr->next != NULL)
        ptr->next->prev = newnode;
    ptr->next = newnode;
    return start;
}

// Function to delete at the beginning
struct node *delete_begin(struct node *start) {
    struct node *ptr;
    if (start == NULL) {
        printf("List is empty!\n");
        return start;
    }
    ptr = start;
    start = start->next;
    if (start != NULL)
        start->prev = NULL;
    free(ptr);
    return start;
}

// Function to delete at the end
struct node *delete_end(struct node *start) {
    struct node *ptr;
    if (start == NULL) {
        printf("List is empty!\n");
        return start;
    }
    ptr = start;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    if (ptr->prev != NULL)
        ptr->prev->next = NULL;
    else
        start = NULL;
    free(ptr);
    return start;
}

// Function to delete after a node
struct node *delete_after(struct node *start) {
    struct node *ptr, *temp;
    int num;
    printf("Enter the value after which to delete:\n");
    scanf("%d", &num);
    ptr = start;
    while (ptr != NULL && ptr->data != num) {
        ptr = ptr->next;
    }
    if (ptr == NULL || ptr->next == NULL) {
        printf("Cannot delete!\n");
        return start;
    }
    temp = ptr->next;
    ptr->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = ptr;
    free(temp);
    return start;
}

// Function to delete before a node
struct node *delete_before(struct node *start) {
    struct node *ptr, *temp;
    int num;
    printf("Enter the value before which to delete:\n");
    scanf("%d", &num);
    ptr = start;
    while (ptr != NULL && ptr->data != num) {
        ptr = ptr->next;
    }
    if (ptr == NULL || ptr->prev == NULL) {
        printf("Cannot delete!\n");
        return start;
    }
    temp = ptr->prev;
    if (temp->prev != NULL)
        temp->prev->next = ptr;
    else
        start = ptr;
    ptr->prev = temp->prev;
    free(temp);
    return start;
}

// Function to delete the entire list
struct node *delete_list(struct node *start) {
    while (start != NULL) {
        start = delete_begin(start);
    }
    return start;
}

// Main function
int main() {
    struct node *start = NULL;
    int choice;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Create a list\n");
        printf("2. Display the list\n");
        printf("3. Add the node at the beginning\n");
        printf("4. Add the node at the end\n");
        printf("5. Add the node before a given node\n");
        printf("6. Add the node after a given node\n");
        printf("7. Delete node at the beginning\n");
        printf("8. Delete node at the end\n");
        printf("9. Delete node before a given node\n");
        printf("10. Delete node after a given node\n");
        printf("11. Delete the entire list\n");
        printf("12. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                start = create(start);
                break;
            case 2:
                display(start);
                break;
            case 3:
                start = insertAtBegin(start);
                break;
            case 4:
                start = insertAtEnd(start);
                break;
            case 5:
                start = insert_before(start);
                break;
            case 6:
                start = insert_after(start);
                break;
            case 7:
                start = delete_begin(start);
                break;
            case 8:
                start = delete_end(start);
                break;
            case 9:
                start = delete_before(start);
                break;
            case 10:
                start = delete_after(start);
                break;
            case 11:
                start = delete_list(start);
                break;
            case 12:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
