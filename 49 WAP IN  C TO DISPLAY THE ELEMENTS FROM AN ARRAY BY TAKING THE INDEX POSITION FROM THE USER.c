#include<stdio.h>
int main(){
    int array[]={1,2,3,4,5};
    int index;
    printf("ENTER THE INDEX POSITION OF THE ELEMENT YOU WANT TO DISPLAY:\n");
    scanf("%d",&index);
    if(index<0 || index>=sizeof(array)/sizeof(array[0])){
        printf("ERROR:INVALID INDEX POSITION.\n");
        return 1;
    }
    printf("THE ELEMENT AT INDEX POSITION %d is %d\n",index,array[index]);
    return 0;
}
