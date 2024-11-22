#include<iostream>
using namespace std;
class rectangle{
    private:
    float width=2;
    float height=3;
    public:
    rectangle(){}

    rectangle(float w,float h):
    width(w),height(h){}

    rectangle(rectangle &rect){
        width=rect.width;
        height=rect.height;
    }
    float area(){
        return width*height;
    }
    void display(){
        cout<<"Width: "<<width<<"height: "<<height<<endl;
    }
};
int main(){
rectangle x;
x.display();
cout<<"Area of rectangle1: "<<x.area()<<endl;

rectangle y(40,30);
y.display();
cout<<"Area of rectangle2: "<<y.area()<<endl;

rectangle z(y);
z.display();
cout<<"Area of rcetangle3: "<<z.area()<<endl;

rectangle w;
w=y;
w.display();

return 0;

}