//
// Created by 12san on 20-10-2024.
//

#include<iostream>

using namespace std;
int func(int nums[],int n){
    int sum=n*(n+1)/2;
    int current=0;
    for(int i=0;i<n;i++){
        current+=nums[i];
    }
    return (sum-current);
}
int main(){
int n,arr[n];
    scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
    func(arr,n);
return 0;
}
