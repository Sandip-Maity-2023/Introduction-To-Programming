//
// Created by 12san on 30-07-2024.
//

#include<stdio.h>
#include<stdlib.h>

#define MAX 100

struct stack{
    int items[MAX];
    int top;
};
 void initStack(struct stack* s){
     s->top=-1;
 }
 int isFull(struct stack* s){
    return s->top==MAX-1;
 }
 int isEmpty(struct stack* s){
      return s->top==-1;
 }
 void push(struct stack* s,int value){
     if(isFull(s)){
         printf("Stack is Full");
     }else{
         s->items[++(s->top)]=value;
         printf("%d is pushed into the stack\n",value);
     }
 }

 int pop(struct stack* s){          //if i want to return a value ,use int instead of void
     if(isEmpty(s)){
         printf("Stack is Empty!\n");
         return -1;
     }else{
         return s->items[(s->top)--];
     }
 }
  void display(struct stack* s){


 }
