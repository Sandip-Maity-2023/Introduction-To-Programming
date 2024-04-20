//
// Created by 12san on 20-04-2024.
//
#include<stdio.h>
int main(){
    int arr[20],i,n;
    printf("enter:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);      //last value of i is n;
    int j,temp;
    j=i-1;                     //last element of the array  This block initializes two integer variables:
                              // j is set to the index of the last element of the array (which is n - 1), and i is set to 0,
                             // which represents the index of the first element of the array.
    i=0;                    //first element of the array
    while(i<j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for(int i =0;i<n;i++){
                  printf("%d\n",arr[i]);  //for printing the array elements
        }
        return (0);
    }
