//
// Created by 12san on 21-11-2024.
//
#include<iostream>
using namespace std;

class Base{
public:
    void display(){
        cout<<"\nDisplay Base"<<endl;
            }
    virtual void show(){
        cout<<"show base"<<endl;
    }
};
class Derived:public Base{
    void display(){
        cout<<"Display Derived"<<endl;
    }
    void show(){
        cout<<"Show derived"<<endl;
    }
};
int main(){
    Base b;
    Derived d;
    Base *bptr;
    cout<<"bptr points to Base"<<endl;
    bptr=&b;
    bptr->display(); //calls Base version
    bptr->show();   //calls Base version

    cout<<"bptr points to Derived"<<endl;
    bptr=&d;
    bptr->display();
    bptr->show();

    return 0;
}