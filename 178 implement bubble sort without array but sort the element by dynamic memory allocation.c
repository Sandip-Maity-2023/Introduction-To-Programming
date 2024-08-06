//
// Created by 12san on 06-08-2024.
//
#include<stdio.h>
#include<stdlib.h>

//definition
struct Node{
    int data;
    struct Node* next;
};

//function of swap
void swap(int *p,int *q){
   int temp=*p;
    *p=*q;
    *q=temp;
}

//function to implement bubble sort using linked List
void bubbleSort(struct Node *start){
    int swapped;
    struct Node *p;
    struct Node *q=NULL;
    if(start==NULL)
        return;
}

do{
swapped = 0;
p = start;

while(p->next !=q){
    if(p->data > p->next->data){
    swap(&p->data,&p->next->data)}
}
}


//function