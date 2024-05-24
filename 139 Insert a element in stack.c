//
// Created by 12san on 16-05-2024.
//
#include<stdio.h>
#define MAX_SIZE 100
typedef struct{
    int arr[MAX_SIZE];
    int top;
}Stack;
void initialize(Stack *stack){
    stack->top=-1;
}
int isFull(Stack *stack){
    return stack->top==MAX_SIZE-1;
}
int isEmpty(Stack *stack) {
    return stack->top == -1;
}
    void push(Stack *stack,int value){
    if(isFull(stack)){
        printf("Stack overflow!\n");
    return;
}
stack->arr[++stack->top]=value;
printf("%d pushed to stack\n",value);
}
void userInputPush(Stack *stack,int times){
    int value;
    for(int i=0;i<times;i++){
        printf("Enter the #%d to push onto the Stack:",i+1);
        scanf("%d",&value);
        push(stack,value);
    }
}
int main(){
    Stack *stack;
    initialize(&stack);
    int times;
    printf("Enter the number of elements:\n");
    scanf("%d",&times);
    userInputPush(&stack,times);
    return 0;
}
