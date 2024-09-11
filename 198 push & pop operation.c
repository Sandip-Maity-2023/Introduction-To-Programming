//
// Created by 12san on 22-08-2024.
//
#include<stdio.h>
#define max 10

void push(int arr[],int val);
int pop(int arr[]);
int peek(int arr[]);
void show(int arr[]);

int top=-1;
int arr[max];

int main() {
    int n, val;
    do {
        printf("\nChoose the option given below..\n");
        printf("\n1. pop");
        printf("\n2. push");
        printf("\n3. peek");
        printf("\n4. display");
        printf("\n5. exit\n");
        scanf("%d", &n);
        switch (n) {
            case 2:
                printf("Enter the value:\n");
                scanf("%d", &val);
                push(arr, val);
                break;
            case 1:
                val = pop(arr);
                if (val != -1) {
                    printf("The value is deleted from stack\n");
                }
                break;
            case 3:
                val = peek(arr);
                if (val != -1) {
                    printf("The value stored at the top of the stack:\t %d", val);
                }
                break;
            case 4:
                show(arr);
                break;
        }
    }
        while (n != 5);
            return 0;
}


        void push(int arr[], int val) {
            if (top == max - 1) {
                printf("The stack is overflow...");
            } else {
                top += 1;
                arr[top] = val;
                printf("The Element is successfully added..");
            }
        }

        int pop(int arr[]) {
            if (top == -1) {
                printf("The stack is underflow..");
            } else {
                int val = arr[top];
                top--;
                return val;
            }
        }

        int peek(int arr[]) {
            if (top == -1) {
                printf("The stack is underflow.");
                return -1;
            } else {
                int val = arr[top];
                return val;
            }
        }

        void show(int arr[]) {
            if (top == -1) {
                printf("The stack is underflow.");
            } else {
                for (int i = top; i >= 0; i--) {
                    printf("%d\n", arr[i]);
                }
            }
        }
