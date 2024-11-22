//
// Created by 12san on 07-09-2024.
//
#include<iostream>
using namespace std;

const int m=50;

class items{
    int code[m];
    float price[m];
    int count;
public:
    void CNT(void){
        count=0;
    }
    void getitem(void);
    void displaysum(void);
    void remove(void);
    void displayitems(void);
};

void items::getitem(void) {
        cout<<"Enter item code:";
        cin>>code[count];
        cout<<"Enter price cost:";
        cin>>price[count];
        count++;
    }
void items::displaysum(void){
    float sum=0;
    for(int i=0;i<count;i++)
        sum+=price[i];
    cout<<"\ttotal value:\t"<<sum<<endl;
}
void items::remove(void) {
    int a;
    cout<<"Enter item code to remove:\n"<<endl;
    cin>>a;
    for(int i=0;i<count;i++)
        if(code[i]==a){
            for(int j=i;j<count-1;j++) {
                code[j] = code[j + 1];
                price[j] = price[j + 1];
            }
        }
    count--;
    cout<<"item removed successfully!"<<endl;
    return;
}
void items::displayitems(void) {
    cout << "code price:" << endl;
    for (int i = 0; i < count; i++)
        cout <<code[i]<<"\t"<<price[i]<<endl;
}

int main(){
    items order;
    order.CNT();
    int x;
    do{
        cout<<"you can use following"<<endl;
        cout<<" 1. add item"<<endl;
        cout<<" 2. display total value"<<endl;
        cout<<" 3. remove the value"<<endl;
        cout<<" 4. display items"<<endl;
        cout<<" 5. Quit"<<endl;
        cout<<"choose the option:"<<endl;
        cin>>x;
        switch(x){
            case 1:
                order.getitem(); break;
            case 2:
                order.displaysum();break;
            case 3:
                order.remove();break;
            case 4:
                order.displayitems();break;
            case 5:
                cout<<"exiting..."<<endl;
                break;
            default:
                cout<<"error in input; try again"<<endl;

        }
    }while(x!=5);
    return 0;
}

