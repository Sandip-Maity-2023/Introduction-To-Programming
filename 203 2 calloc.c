#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i,*ptr,sum=0;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));  //multiple block of requested memory
	
	if(ptr==NULL){
		printf("sorry! unavailable to allocate the memory.\n");
		exit(0);
	}
	printf("Enter the elements :\n");
	for(i=0;i<n;i++){
		scanf("%d",(ptr+i));
		sum+=*(ptr+i);
	}
	printf("Sum:%d",sum);
	free(ptr);
	return 0;
}
