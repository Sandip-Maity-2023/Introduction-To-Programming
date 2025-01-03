//
// Created by 12san on 25-12-2024.
//circular doubly linked list by book code

#include<stdlib.h>
#include<stdio.h>

typedef struct node{
    int data;
    struct node *next;
    struct node *prev;
}node;

//creation of linked list
node *create(struct node *start){
    node *newnode,*ptr;
    int num;
    printf("Enter -1 to End:\n");
    printf("Enter the data:\n");
    scanf("%d",&num);

    while(num !=-1){
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=num;
        if(start==NULL){
            newnode->prev=newnode;
            newnode->next=newnode;
            start=newnode;
        } else{
            ptr=start;
            while(ptr->next !=start){
                ptr=ptr->next;
            }
            newnode->next=start;
            ptr->next=newnode;
            newnode->prev=ptr;
            start->prev=newnode;
        }
        printf("Enter the data:\n");
        scanf("%d",&num);
    }
    return start;
}

//display of linked list
node *display(struct node *start){
    struct node *ptr;
    ptr=start;
    if(ptr==NULL){
        printf("List is Empty\n");
        return start;
    }
    while(ptr->next !=start){
        printf("\t%d",ptr->data);
        ptr=ptr->next;
    }
    printf("\t %d",ptr->data);
    return start;
}

//insertion in the beginning
node *insert_begin(struct node *start){
    struct node *newnode,*ptr;
    int num;
    printf("Enter the data:\n");
    scanf("%d",&num);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    ptr=start;
    while(ptr->next !=start){
        ptr=ptr->next;
    }
    newnode->prev=ptr;
    ptr->next=newnode;
    newnode->next=start;
    start->prev=newnode;
    start=newnode;
    return start;
}

//insertion in the end
node *insert_end(struct node *start){
    struct node *newnode,*ptr;
    int num;
    printf("Enter the data:\n");
    scanf("%d",&num);
    newnode=(struct node*) malloc(sizeof(struct node));
    newnode->data=num;
    ptr=start;
    while(ptr->next !=start){
        ptr=ptr->next;
    }
    ptr->next=newnode;
    newnode->prev=ptr;
    newnode->next=start;
    start->prev=newnode;
    return start;
}

//delete at the beginning
node *delete_begin(struct node *start){
    struct node *ptr,*temp;
    ptr=start;
    while(ptr->next !=start){
        ptr=ptr->next;
    }
    ptr->next=start->next;
    temp=start;
    start=start->next;
    start->prev=ptr;
    free(temp);
    return start;
}

//delete at the end
node *delete_end(struct node *start){
    struct node *ptr;
    ptr=start;
    while(ptr->next !=start){
        ptr=ptr->next;
    }
    ptr->prev->next=start;
    start->prev=ptr->prev;
    free(ptr);
    return start;
}

//delete specific node
node *delete_node(struct node *start){
    struct node *ptr;
    int val;
    printf("Enter the node which have to delete:\n");
    scanf("%d",&val);
    ptr=start;
    if(ptr->data==val){
        start= delete_begin(start);
        return start;
    }else{
        while(ptr->data !=val){
            ptr=ptr->next;
        }
        ptr->prev->next=ptr->next;
        ptr->next->prev=ptr->prev;
        free(ptr);
        return start;
    }
}

//deletion of list
node *delete_list(struct node *start){
   while(start !=NULL){
       start= delete_end(start);
   }
    return start;
}

int main(){
int val;
struct node *start=NULL;
do{
    printf("\nMENU\n");
    printf("1. create list\n");
    printf("2. display the list\n");
    printf("3. insert at beginning\n");
    printf("4. insert at end\n");
    printf("5. delete at begin\n");
    printf("6. delete at end\n");
    printf("7. delete the node\n");
    printf("8. Delete the list\n");
    printf("9. Exit\n");
    printf("Enter your options\n");
    scanf("%d",&val);
    switch (val) {
        case 1:
            start = create(start);
            printf("Circular doubly linked list created\n");
            break;
        case 2:
            start = display(start);
            break;
        case 3:
            start = insert_begin(start);
            break;
        case 4:
            start = insert_end(start);
            break;
        case 5:
            start = delete_begin(start);
            break;
        case 6:
            start = delete_end(start);
            break;
        case 7:
            start = delete_node(start);
            break;
        case 8:
            start = delete_list(start);
            break;
        case 9:
            exit(0);
        default:
            printf("Invalid \n");
    }
    }while(val !=9);
    return 0;
}