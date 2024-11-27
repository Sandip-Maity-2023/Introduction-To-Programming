//
// Created by 12san on 27-11-2024.
//
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *start =NULL;
struct node *create_l1(struct node *);
struct node *display(struct node *);

struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_before(struct node *);
struct node *insert_after(struct node *);

struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_node(struct node *);
struct node *delete_after(struct node *);
struct node *delete_list(struct node *);

struct node *sort_list(struct node *);

int main(int argc,char *argv[]){
    int i;
    printf("Number of arguments: %d\n",argc);
    for(i=0;i<argc;i++){
        printf("Argument %d: %s\n",i,argv[i]);
    }

    int option;
    do{
        printf("------Main Menu-------\n");
        printf("1. Create a list\n");
        printf("2. Display the list\n");
        printf("3. Add a node in the beginning\n");
        printf("4. Add a node at the end\n");
        printf("5. Add a node before a given node\n");
        printf("6. Add a node after a given node\n");
        printf("7. Delete a node in the beginning\n");
        printf("8. Delete a node at the end\n");
        printf("9. Delete a given node \n");
        printf("10. Delete a node after a given node\n");
        printf("11. Create the entire list\n");
        printf("12. Sort the list \n");
        printf("13. Exit");
        printf(" Choose the option\n");
        scanf("%d",&option);
        switch(option){
            case 1:
                start= create_l1(start);
                printf("Linked list created\n");
                break;
            case 2:
                start=display(start);
                break;
            case 3:
                start= insert_beg(start);
                break;
            case 4:
                start= insert_end(start);
                break;
            case 5:
                start= insert_before(start);
                break;
            case 6:
                start= insert_after(start);
                break;
            case 7:
                start= delete_beg(start);
                break;
            case 8:
                start= delete_end(start);
                break;
            case 9:
                start=delete_node(start);
                break;
            case 10:
                start= delete_after(start);
                break;
            case 11:
                start= delete_list(start);
                printf("Linked list deleted\n");
                break;
            case 12:
                start= sort_list(start);
                break;
            case 13:
                exit(0);
            default:
                printf("Invalid Choice\n");

        }
    }while(option !=13);
    return 0;
}

struct node *create_l1(struct node *start){
struct node *new_node,*ptr;
int num;
printf("Enter -1 to end\n");
printf("Enter the data:\n");
scanf("%d",&num);
while(num !=-1){
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=num;
    if(start==NULL){
        new_node->next=NULL;
        start=new_node;
    }else{
        ptr=start;
        while(ptr->next !=NULL) {
            ptr = ptr->next;
        }
            ptr->next=new_node;
            new_node->next=NULL;
    }
    printf("Enter the data:\n");
    scanf("%d",&num);
    }
return start;
}

struct node *display(struct node *start){
    struct node *ptr;
    ptr=start;
    if(ptr==NULL){
        printf("List is Empty");
        return 0;
    }else{
        while(ptr !=NULL){
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
    return start;
}

struct node *insert_beg(struct node *start){
    struct node *new_node;
    int num;
    printf("Enter the data:\n");
    scanf("%d",&num);
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=num;
    new_node->next=start;
    start=new_node;
    return start;
}

struct node *insert_end(struct node *start){
    struct node *new_node,*ptr;
    int num;
    printf("Enter the value:\n");
    scanf("%d",&num);
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=num;
    new_node->next=NULL;
    if(start== NULL){
        start=new_node;
    }else{
        ptr=start;
        while(ptr->next !=NULL){
            ptr=ptr->next;
        }
        ptr->next=new_node;
    }
   /* ptr=start;
    while(ptr->next !=NULL){
        ptr=ptr->next;
        }
        ptr->next=new_node;
    }
    */
    return start;
}

struct node *insert_before(struct node *start){
    struct node *new_node,*ptr,*preptr;
    int num;
    printf("Enter the data:\n");
    scanf("%d",&num);
    printf("Enter the value before which to insert: ");
    scanf("%d", &val);

    new_node=(struct node*) malloc(sizeof (struct node));
    new_node->data=num;

    if (start == NULL) {
        printf("List is empty.\n");
        return start;
    }

    if (start->data == val) {
        new_node->next = start;
        start = new_node;
        return start;
    }

    ptr = start;
    while (ptr != NULL && ptr->data != val) {
        preptr = ptr;
        ptr = ptr->next;
    }

    if (ptr == NULL) {
        printf("Value not found in the list.\n");
    } else {
        preptr->next = new_node;
        new_node->next = ptr;
    }
    return start;
}
    /*
    ptr=start;
    while(ptr->data !=num){
        preptr=ptr;
        ptr=ptr->next;
    }
    ptr->next=new_node;
    new_node->next=ptr;

    return start;
}
*/

struct node *insert_after(struct node *start){
    struct node *new_node,*ptr,*preptr;
    int num;
    printf("Enter the data:\n");
    scanf("%d",&num);
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=num;
    ptr=start;
    preptr=ptr;
    while(preptr->data !=num){
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=new_node;
    new_node->next=ptr;

    return start;
}

struct node *delete_beg(struct node *start){
    struct node *ptr;
    start=ptr;
    start=start->next;
    free(ptr);

    return start;
}

struct node *delete_end(struct node *start){
    struct node *ptr,*preptr;
    start=ptr;
    while (ptr->next !=NULL){
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=NULL;
    free(ptr);

    return start;
}

struct node *delete_node(struct node *start){
    struct node *ptr,*preptr;
    int num;
    printf("Enter the value of node which has to be deleted:\n");
    scanf("%d",&num);
    ptr=start;
    if(ptr->data==num){
        start= delete_beg(start);
        return start;
    }else{
        while(ptr->data !=num){
            preptr=ptr;
            ptr=ptr->next;
        }
        preptr->next=ptr->next;
        free(ptr);
        return start;
    }
}

struct node *delete_after(struct node *start){
    struct node *ptr,*preptr;
    int num;
    printf("Enter the value after the node has to be deleted:\n");
    scanf("%d",&num);
    start=ptr;
    while(ptr->data !=num){
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=ptr->next;
    free(ptr);
    return start;
}

struct node *delete_list(struct node *start){
    struct node *ptr;
    if(start != NULL) {
        ptr = start;
        while (ptr != NULL) {
            printf("%d is to be deleted next", ptr->data);
            start = delete_beg(ptr);
            ptr = start;
        }
    }
    return start;
}

struct node *sort_list(struct node *start){
    struct node *ptr1,*ptr2;
    int temp;
    ptr1=start;
    while(ptr1->next !=NULL){
        ptr2=ptr1->next;
        while(ptr2 !=NULL){
            if(ptr1->data > ptr2->data){
                temp=ptr1->data;
                ptr1->data=ptr2->data;
                ptr2->data=temp;
            }
            ptr2=ptr2->next;
            }
        ptr1=ptr1->next;
    }
    return start;
}