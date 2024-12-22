//
// Created by 12san on 18-12-2024.
//
#include<stdio.h>
#include<stdlib.h>

//structure of node and using typedef to avoid alias
typedef struct node{
    int data;
    struct node* next;
}n;   //n is used to define structure of node

typedef struct queue{
    n* front;
    n* rear;
}q;    //q is used to each node has front and rear part

//initialisation of queue
void initialize(q* y){
    y->front=NULL;
    y->rear=NULL;
}

//function to check it is empty or not
int isEmpty(q* y){
    return (y->front==NULL);
}

void enqueue(q* y,int val){               //void have to give return type
    n* newNode=(n*)malloc(sizeof(n));
    if(!newNode) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data=val;
    newNode->next=NULL;

    if (isEmpty(y)){
        y->front=newNode;    //remind the pic of jenny's lecture
    }else                    //if not empty
        y->rear->next=newNode;
    y->rear=newNode;
    printf("%d is enqueued\n",newNode->data);  //value can be used
}

//function to dequeue an element from the queue
int dequeue(q* y){        //not necessary to give return type
    if(isEmpty(y)){
        printf("Can't Dequeued, as it is Empty\n");
        return -1;
    }
    n* temp=y->front;
    int val=temp->data;
    y->front=y->front->next;

    if(y->front==NULL)
        y->rear=NULL;
    free(temp);
    printf("Dequeued element %d\n",val);  //if y->data
    return val;   //not need
}

//function to peek at the front element
int peek(q* y){
    if(isEmpty(y)){
        printf("Queue is Empty\n");
        //return -1;
    }
    printf("Peek: %d",y->front->data);
    //return y->front->data;                   // as in case 3 value as to be return
}

//function to display the elements of the queue
void display(q* y){
    if(isEmpty(y)){
        printf("Queue is Empty\n");
        return;
    }
    n* temp=y->front;
    printf("Queue\n");
    while(temp){
        printf("%d\t",temp->data);  //or value
        temp=temp->next;
    }
}
int main(){
    q x;
    initialize(&x);
    int choice,value;

    while(1){
        printf("\nMenu\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter the value:\n");
                scanf("%d",&value);
                enqueue(&x,value);
                break;
            case 2:
                dequeue(&x);
                break;
            case 3:
                peek(&x);
                break;
            case 4:
                display(&x);
                break;
            case 5:
                printf("Good Bye, Stay well and jolly");
                exit(0);
            default:
                printf("Invalid input\n");
        }
    }
}