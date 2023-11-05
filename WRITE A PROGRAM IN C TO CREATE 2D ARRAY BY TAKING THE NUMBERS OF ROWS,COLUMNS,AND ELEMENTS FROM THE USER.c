#include<stdio.h>
#include<stdlib.h>
int main(){
    int rows,columns,elements,size;
    printf("ENTER THE NUMBER OF ROWS:\n");
    scanf("%d",&rows);
    printf("ENTER THE NUMBER OF COLUMNS:\n");
    scanf("%d",&columns);
    elements=rows*columns;
    int *array=(int*)malloc(sizeof(int*)*rows);
    if(array==NULL){
        printf("ERROR:COULD NOT ALLOCATE MEMORY FOR THE ARRAY\n");
        return 1;
    }
    printf("ENTER THE ELEMENTS OF THE ARRAY:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    printf("THE ELEMENTS OF THE ARRAY ARE:\n");
    for(int i=0;i<size;i++){
        printf("%d",array[i]);
    }
    printf("\n");
    free(array);
    return 0;
    }
