//
// Created by 12san on 20-10-2024.
//

#include<iostream>
using namespace std;
int func(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i]+arr[j])==target){
                arr[0]=i;
                arr[1]=j;
                break;
            }
        }
    }
    return arr[n];
}
int main(){
    int n,target,arr[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d",&target);
    func(arr,n,target);
    return 0;
}

