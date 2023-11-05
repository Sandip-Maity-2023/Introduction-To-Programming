#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;
    printf("ENTER THE SIZE OF ARRAY:");
    scanf("%d",&size);
    int *array=(int*)malloc(sizeof(int)*size);
    if(array==NULL){
        printf("ERROR:COULD NOT ALLOCATE MEMORY FOR THE ARRAY\n");
        return 1;
    }
    printf("ENTER THE ELEMENTS OF THE ARRAY:");
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    printf("THE ELEMENTS OF THE ARRAY ARE:");
    for(int i=0;i<size;i++){
        printf("%d",array[i]);
    }
    printf("\n");
    free(array);
    return 0;
}
