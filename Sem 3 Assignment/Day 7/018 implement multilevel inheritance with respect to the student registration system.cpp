//
// Created by 12san on 09-11-2024.
//
#include<iostream>
using namespace std;

class eligible{
protected:
    float higher;
    float secondary;
public:
    void get(float a,float b){
        higher=a;
        secondary=b;
        if(higher<=75 || secondary<=75)
            cout<<"Marks is less than 75%."<<endl<<"Not Eligible for admission"<<endl;
        else
            cout<<"You are eligible.\n";
    }
    void show(){
        cout<<"12th marks: "<<higher<<endl;
        cout<<"10th marks: "<<secondary<<endl;
    }
};
class documents:public eligible{
protected:
    char a,y='y';
public:
    void verify(){
    cout<<"All documents are verified !"<<endl;
    cin>>a;
    if(a==y)
        cout<<"Admission is successful"<<endl;
    else
        cout<<"Admission is unsuccessful"<<endl;
    }
};
class student: public documents{
//protected:
//char course;
public:
    void program(const string& course){   //char a not operating
        cout<<"Student is admitted to "<<course<<" course."<<endl;
        cout<<"Registration is Successfully operated."<<endl;
        cout<<"It's a 4 year undergraduate course."<<endl;
    }
};
int main(){
    student x;
    x.get(77,95);
    x.show();
    x.verify();
    x.program("Computer Science & Engineering");  //not 'computer science'

    return 0;
}
