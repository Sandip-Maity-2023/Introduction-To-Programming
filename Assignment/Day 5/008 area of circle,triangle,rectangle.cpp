//
// Created by 12san on 19-09-2024.
//
#include<iostream>
using namespace std;
 class Area{
 public:
     float triangle(float b,float h){
         return 0.5*b*h;
     }
     float circle(float r){
         return 3.14*r*r;
     }
     float rectangle(float l,float b){
         return l*b;
     }
     void display(){
     float a,b,c,d,e,f;
         cout<<"Enter the value of base & height:"<<endl;
         cin>>b>>a;
         cout<<"Area of triangle: "<<rectangle(b,a)<<endl;
         cout<<"Enter the value of radius:"<<endl;
         cin>>c;
         cout<<"Area of Circle: "<<circle(c)<<endl;
         cout<<"Enter the value of length & breadth: "<<endl;
         cin>>d>>e;
         cout<<"Enter the value of rectangle: "<<rectangle(d,e)<<endl;

     }
 };

 int main(){
     Area x;
     x.display();
     return 0;
 }