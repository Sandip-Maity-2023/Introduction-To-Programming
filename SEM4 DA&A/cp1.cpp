//
// Created by 12san on 29-04-2025.
//

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class sol {
public:
    int second_largest(vector<int> &arr) {
int max=arr[0],m=arr[0];
for(int i=1;i<arr.size();i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
for(int i=1;i<arr.size();i++){
    if(arr[i] !=max && arr[i]>m){
        m=arr[i];
    }
}
return m;
    }
};
int main() {
    vector<int>arr;
    int n,temp;
    cout<<"Enter no of elements:"<<endl;
    cin>>n;
    cout << "Enter Elements:\n" << endl;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    sol x;
    int r=x.second_largest(arr);
    cout<<r;
    if(r==-1) cout<<"-1";   
}
