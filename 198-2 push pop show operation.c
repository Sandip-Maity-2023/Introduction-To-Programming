//
// Created by 12san on 15-09-2024.
//
#include<stdio.h>
#include<stdlib.h>

#define max 10
int stack[max];
int top=-1;

void push(int val){
    if(top==max-1){
        printf("The stack is overflow.\n");
    }else{
        stack[++top]=val;
        printf("The data is successfully saved.\n");
    }
}

int pop(){
    if(top==-1){
        printf("The stack is underflow.\n");
        return -1;
    }
    printf("Popped element:%d\n",stack[top]);
    return stack[top--];
}

int show(){
    if(top!=-1){
        printf("The stack elements are\n");
        for(int i=top;i>=0;i--){
printf("%d\t",stack[i]);
        }
        printf("\n"); //add newline for better formatting
    }else{
        printf("The stack is empty.\n");
    }
}

float average(){
    if(top!=-1){
        int sum=0;
        for(int i=0;i<=top;i++){
            sum+=stack[i];
        }
        float avg=(float)sum/(top+1);
        printf("Average:\t",avg);
        return avg;
    }else{
        printf("The stack is empty.\n");
        return -1;
    }

}

int minimum(){
    if(top!=-1){
        int min=stack[0];
        for(int i=1;i<=top;i++){
            if(stack[i]<min){
                min=stack[i];
            }
        }
        printf("Minimum:%d\t",min);
        return min;
    }else{
        printf("The stack is empty.\n");
        return -1;
    }
}

int main(){
    int n,b,val;
    while(1){
        printf("Choose the option:\n1.push\n2.pop\n3.show\n4.exit\n5.average\n6.minimum\n");
        scanf("%d",&n);

        switch(n){
            case 1:
                printf("Enter the no of elements:\n");
                scanf("%d",&b);
                for(int i=0;i<b;i++) {
                    printf("Enter the value to push:\n ");
                    scanf("%d", &val);
                    push(val);
                }
                break;
            case 2:
               pop();
               break;
            case 3:
                show();
                break;
            case 4:
                exit(0);
            case 5:
                average();
                break;
            case 6:
                minimum();
                break;
            default:
                printf("Invalid option\n");
                break;
                }
        }
    return 0;
    }
