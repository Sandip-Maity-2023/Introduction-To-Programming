//
// Created by 12san on 21-11-2024.
//
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a & b:"<<endl;
    cin>>a>>b;
    int x=a-b;
    try{
        if(x !=0){
            cout<<"Result(a/x) = "<<a/x<<endl;
        }else{
            throw(x);
        }
    }
    catch(int i){
        cout<<"Exception caught: x= "<<x<<endl;
    }
    cout<<"End"<<endl;

    return 0;