//implement queue using array & Linkedlist

#include<stdio.h>
#include<stdlib.h>

#define size 10
int font=-1;
int rear=-1;
int arr[size];

void enqueue(){
	int item;    
	if(rear==size-1){
		printf("Queue is overflow\n");
	}else{
	
	font=0;
		printf("Enter the item:\n");
		scanf("%d",&item);
		rear+=1;
		printf("Element is inserted in the queue\n");
		arr[rear]=item;
	}
}
void dequeue(){
	if(rear==-1 || font>rear){
		printf("Queue is underflow\n");
		return;
	}else{
		font+=1;
		printf("Elment is deteted\n");
	}
}
void show(){
	if(font==-1){
		printf("Queue is empty\n");
	}else{
	
	
	for(int i=font;i<=rear;i++){
		printf("%d\n",arr[i]);		
	}
}	
}
int main(){
	int n;	
	while(1){

printf("1.Enqueue\t2. Dequeue\t3.Display\t4.Exit\n");
printf("Choose the option:\n");
scanf("%d",&n);
switch(n){
	case 1:
		
		enqueue();
		break;
	case 2:
		dequeue();
		break;
	case 3:
			show();
			break;
	case 4:
	    exit(0);
	default:
	printf("wrong choice....choose again....");			
}	    
}
return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
}
