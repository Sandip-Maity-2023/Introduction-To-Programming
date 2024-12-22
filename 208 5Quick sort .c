//
// Created by 12san on 20-12-2024.
//
#include<stdio.h>

int partition(int arr[],int beg,int end){
    int left,right,temp,loc,flag=0;
    loc=left=beg;
    right=end;
    while(flag !=1){
        while(arr[loc]<=arr[right] && loc!=right)   //if no bracket then by default one line will work
            right--;
            if(loc==right)
                flag=1;
            else if(arr[loc]>arr[right]){
                temp=arr[loc];
                arr[loc]=arr[right];
                arr[right]=temp;
                loc=right;
            }
            if(flag !=1){
                while(arr[loc]>=arr[left] && loc !=left)
                    left++;
                    if(loc==left)
                        flag=1;
                        else if(arr[loc]<arr[left]){
                            temp=arr[loc];
                            arr[loc]=arr[left];
                            arr[left]=temp;
                            loc=left;
                        }
                    }
                }
            return loc;
}
int quick(int arr[],int beg,int end){
int loc;
if(beg<end){
    loc= partition(arr,beg,end);
    quick(arr,beg,loc-1);
    quick(arr,loc+1,end);
}
}
int main(){
    int n;
    printf("Enter no of elements:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d\t\a",arr[i]);
    }
    printf("\n");
    quick(arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d\t\a",arr[i]);
    }
}