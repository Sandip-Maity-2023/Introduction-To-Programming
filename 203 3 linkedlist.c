#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head;

void begin_insert(){
	struct node *ptr;
	int item;
	ptr=(struct node*)malloc(sizeof(struct node*));
	if(ptr==NULL){
		printf("OVERFLOW\n");
	}
	else{
		printf("Enter the value:\n");
		scanf("%d",&item); 
		ptr->data=item;
		ptr->next=head;
		head=ptr;
		printf("Node Inserted.\n");
	}
}
void last_insert(){
	struct node *ptr,*temp;
	int item;
	ptr=(struct node*)malloc(sizeof(struct node));
	
	if(ptr==NULL){
		printf("OVERFLOW\n");
	}else{
		printf("Enter value:\n");
		scanf("%d",&item);
		ptr->data=item;
		
		if(head==NULL){
			ptr->next=NULL;
			head=ptr;
			printf("Node inserted.\n");
		}else{
			temp=head;
			while(temp->next!=NULL){
				temp=temp->next;
          temp->next = ptr;  
            ptr->next = NULL;  
            printf("\nNode inserted");  
	          
	}  

			}
		}
		
		
		
	}
}
void random_insert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();
void main(){
	
	return 0;
} 
