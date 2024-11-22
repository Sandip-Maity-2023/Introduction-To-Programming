#include "stdio.h"
int main(){
    int n,arr[n];
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        printf("Enter %d no element:\n",i+1);
        scanf("%d",&arr[i]);
    }
    int *ptr=arr;  //first element of the array
    printf("Elements of the array are:\n");
    for(int i=0;i<n;i++){
        printf("Element %d:\t%d\n",i+1,*(ptr+i));
    }
        return 0;
}