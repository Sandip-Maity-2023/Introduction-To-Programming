//
// Created by 12san on 04-10-2024.
//
#include<iostream>
using namespace std;
int count=0;
class alpha{

public:
    alpha(){
        count++;
        cout<<"No of objects created "<<count<<endl;
    }
    ~alpha(){
        cout<<"No of objects destroyed "<<count<<endl;
        count--;
    }
};

int main(){
    cout<<"\n Enter main "<<endl;
    alpha u,v,w,x;
    {
        cout<<"Enter Block 1 "<<endl;
        alpha y;
    }
    {
        cout<<"Enter Block 2 "<<endl;
        alpha z;
    }
    cout<<" Re-Enter main\n";

    return 0;
}