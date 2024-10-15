//
// Created by 12san on 04-08-2024.
//

#include<stdio.h>
#define MAX 10

int queue[MAX];
int front=-1;
int rear=-1;

void insert(void);
int delete(void);
int peek(void);
void display(void);


int main() {
    int val, option;
    do {
        printf("\n*****MAIN MENU*****\n\n");
        printf("1. INSERT\t");
        printf("2. DELETE\t");
        printf("3. PEEK\t\t");
        printf("4. DISPLAY\t");
        printf("5. EXIT\t");
        printf("\n\nChoose the option:\n");
        scanf("%d", &option);
        switch(option) {
            case 1:
                insert();
                break;
            case 2:
                val=delete();
                if(val !=-1){
                    printf("\nThe number is deleted: %d\n",val);
                }
                break;
            case 3:
                val=peek();
                if(val !=-1)
                    printf("The first value in the queue is %d\n",val);
                break;
            case 4:
                display();
                break;
        }

    }while(option !=5);
        return 0;
}
void insert(){
int num;
printf("Enter the number that to be inserted in the Queue:\n");
scanf("%d",&num);
if(rear==MAX-1){
    printf("The Queue is overflow\n");
}else if(front==-1 && rear==-1){
    front=rear=0;
    queue[rear]=num;
}else{
    rear++;
    queue[rear]=num;
}
}

int delete(){
    int val;
    if(front==-1 || front>rear){
        printf("The queue is underflow\n means it is empty");
        return -1;
    }else{
        val=queue[front];
        front++;
        if(front>rear) {
            front = rear = -1;
        }
            return val;
    }
}

void display() {
    if (front == -1) {
        printf("The queue is empty\n");
    } else {
        for (int i = front; i <= rear; i++) {
            printf("%d\t", queue[i]);
        }
        printf("\n");
    }
}

int peek(void){
    if(front==-1 || front>rear){
        printf("The Queue is Empty");
        return -1;
    }else{
        return queue[front];
    }
}