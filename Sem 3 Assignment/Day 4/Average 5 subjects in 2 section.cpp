//
// Created by 12san on 21-09-2024.
//
#include<iostream>
using namespace std;

class average{
        float a,b,c,d,e;
        int value;
        public:
        void get(){
            cout<<"Enter Mathematics marks:"<<endl;
            cin>>a;
            cout<<"Enter Programming marks:"<<endl;
            cin>>b;
            cout<<"Enter Communication marks:"<<endl;
            cin>>c;
            cout<<"Enter Electronics marks:"<<endl;
            cin>>d;
            cout<<"Enter Data Structure & Algorithm:"<<endl;
            cin>>e;
        }
        void avg(){
            float y=(a+b+c+d+e)/5;
            cout<<"The Average of the marks: "<<y<<endl;
        }
        int left_shift(int shift){
            return value<<shift;
        }
        int right_shift(int shift){
            return value>>shift;
        }
};
int main(){
    average x;
    x.get();
    x.avg();
    int q;
    cout<<"Enter value: "<<endl;
    cin>>q;
    cout<<"Left shift: "<<x.left_shift(q)<<endl;       //  *2^q
    cout<<"Right shift: "<<x.right_shift(q)<<endl;    //   /2^q


    return 0;
}