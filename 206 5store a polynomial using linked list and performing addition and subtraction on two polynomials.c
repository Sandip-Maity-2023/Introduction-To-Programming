//
// Created by 12san on 25-12-2024.
//
#include<stdio.h>
#include<stdlib.h>


//structure of node
typedef struct node{
    int num;           //number    5x^2  2 is coefficient and 5 is number
    int co;            //coefficient
    struct node *next;
}node;

//creation of the node
struct node *create(struct node *start){
    struct node *newnode,*ptr;
    int n,c;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("Enter the coefficient:\n");
    scanf("%d",&c);
    while(n !=-1) {
        if (start == NULL) {
            newnode = (struct node *) malloc(sizeof(struct node));
            newnode->num = n;
            newnode->co = c;
            newnode->next = NULL;
            return newnode;
        } else {
            ptr = start;
            while (ptr->next != NULL) {
                ptr = ptr->next;
            }
            newnode = (struct node *) malloc(sizeof(struct node));
            newnode->num = n;
            newnode->co = c;
            newnode->next = NULL;
            ptr->next = newnode;
        }
        printf("Enter the number:\n");
        scanf("%d", &n);
        if (n == -1)
            break;
        printf("Enter coefficient:\n");
        scanf("%d", &c);
    }
    return start;
    }
//display of the node
node *display(struct node *start){
    struct node *ptr;
    ptr=start;
    while(ptr !=NULL){
        printf("\n%d x %d\t",ptr->num,ptr->co);
        ptr=ptr->next;
    }
    return start;
}
//structure to add two node
struct node *add_node(struct node *start,int n,int c){
    struct node *ptr,*newnode;
if(start==NULL){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->num=n;
    newnode->co=c;
    start=newnode;
}else{
    ptr=start;
    while(ptr->next !=NULL){
        ptr=ptr->next;
    }
newnode=(struct node*)malloc(sizeof(struct node));
    newnode->num=n;
    newnode->co=c;
    newnode->next=NULL;
    ptr->next=newnode;
}
    return start;
}

//structure to add two polynomial
node *add_poly(struct node* start1,struct node *start2,struct node *start3){
    struct node *ptr1,*ptr2;
    int sum;
    ptr1=start1,ptr2=start2;

    while(ptr1 !=NULL && ptr2 !=NULL){
        if(ptr1->co==ptr2->co){
            sum=ptr1->num+ptr2->num;
            start3= add_node(start3,ptr1->num,ptr1->co);
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }else if(ptr1->co >ptr2->co){
            start3= add_node(start3,ptr1->num,ptr1->co);
            ptr1=ptr1->next;
        }else{
            start3= add_node(start3,ptr2->num,ptr2->co);
            ptr2=ptr2->next;
        }
    }
    if(ptr1==NULL){
        while(ptr2 !=NULL){
            start3=add_node(start3,ptr2->num,ptr2->co);
            ptr2=ptr2->next;
        }
    }
    if(ptr2==NULL){
        while(ptr1 !=NULL){
            start3= add_node(start3,ptr1->num,ptr1->co);
            ptr1=ptr1->next;
        }
    }
    return start3;
}

//structure to sub two polynomial
struct node *sub_poly(struct node *start1,struct node *start2,struct node *start4){
    struct node *newnode,*ptr1,*ptr2;
    int sub;
    ptr1=start1,ptr2=start2;

    while(ptr1 !=NULL || ptr1 !=NULL){
        if(ptr1->co==ptr2->co){
            sub=ptr1->num-ptr2->num;
            start4= add_node(start4,ptr1->num,ptr1->co);
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }else if(ptr1->co > ptr2->co){
            start4= add_node(start4,ptr1->num,ptr1->co);
            ptr1=ptr1->next;
        }else{
            start4= add_node(start4,ptr2->num,ptr2->co);
            ptr2=ptr2->next;
        }
    }if(ptr1==NULL){
        while(ptr2 !=NULL){
            start4= add_node(start4,ptr2->num,ptr2->co);
            ptr2=ptr2->next;
        }
    }
    if(ptr2==NULL){
        while(ptr1 !=NULL){
            start4= add_node(start4,ptr1->num,ptr1->co);
            ptr1=ptr1->next;
        }
    }
    return start4;
}

int main(){
int op;
    node *start1=NULL;
    node *start2=NULL;
    node *start3=NULL;
    node *start4=NULL;
do {
    printf("\n****Main Menu****\n");
    printf("1. Enter the first polynomial:\n");
    printf("2. Display the first polynomial:\n");
    printf("3. Enter the second polynomial:\n");
    printf("4. Display the second polynomial:\n");
    printf("5. Add these two\n");
    printf("6. Display the result:\n");
    printf("7. Substract these two\n");
    printf("8. Display the result:\n");
    printf("9. Exit\n");
    printf("Choose your option:\n");
    scanf("%d", &op);
    switch (op) {
        case 1:
            start1 = create(start1);
            break;
        case 2:
            start1 = display(start1);
            break;
        case 3:
            start2 = create(start2);
            break;
        case 4:
            start2 = display(start2);
            break;
        case 5:
            start3 = add_poly(start1, start2, start3);
            break;
        case 6:
            start3 = display(start3);
            break;
        case 7:
            start4 = sub_poly(start1, start2, start4);
            break;
        case 8:
            start4 = display(start4);
            break;
        case 9:
            exit(0);
        default:
            printf("Invalid option\n");
    }
}while(op !=-9);
    return 0;
}