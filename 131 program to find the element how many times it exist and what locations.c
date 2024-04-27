//
// Created by 12san on 27-04-2024.
//
#include<stdio.h>
int main(){
    int n,count=0,search;
    int arr[100];
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element that to be searched:\n");
    scanf("%d", &search);
    for(int i=0;i<n;i++) {
        if (arr[i] == search) {
            printf("The element %d is found at location %d\n", search, i + 1);
            count++;
        }
    }
    if(count==0)
            printf("%d element is no present in the array\n",search);
    else
        printf("%d is present %d times in the array.\n",search,count);
return 0;
}
