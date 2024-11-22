//
// Created by 12san on 09-11-2024.
//
#include<iostream>
using namespace std;
class assessment{
protected:
    int project;
public:
    void put(float b){
        project=b;
    }
    void forward(){
        if(project>=5)
            cout<<"You are eligible for end semester exam "<<endl;
        else
            cout<<"You are not eligible for End sem exam "<<endl;
    }
};
class exam:public assessment{
protected:
    float assignment,test;
public:
    void find(float a,float b){
        assignment=a;
        test=b;
    }
    void sight(){
        cout<<"Assignment Score: "<<assignment<<endl;
        cout<<"Test: "<<test<<endl;
    }

};
class performance{
protected:
    float score;
public:
    void get(float a){
        score=a;
    }
    void show(){
        cout<<"class Performance Score: "<<score<<endl;
    }
};
class result:public exam,public performance{   //not declaring it is initiated private
protected:
    float total;
public:
    void display(){
        forward();
        sight();
        show();
        total=project+assignment+test+score;
        cout<<"Total marks: "<<total<<endl;
    }
};
int main(){
    result x;
    x.put(7);
    x.find(15,3);
    x.get(5);
    x.display();
}