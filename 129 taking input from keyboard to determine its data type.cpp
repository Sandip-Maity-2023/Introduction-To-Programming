//
// Created by 12san on 27-10-2024.
//
#include<iostream>
using namespace std;
#include<ctype.h>

class key{
private:
    char a;
public:
    void board(){
        cout<<"Enter a single character:\n"<<endl;
        cin>>a;
        if(isdigit(static_cast<char>(a))){                 //unsigned char or char
            cout<<"The character entered is a Digit"<<endl;
        }else if(isalpha(static_cast<unsigned char>(a))){
            cout<<"The charcter entered is an Alphabet"<<endl;
        }else if(ispunct(static_cast<unsigned char>(a))){
            cout<<"The charcter entered is a Punctuation"<<endl;
        }else if(isspace(static_cast<unsigned char>(a))){
            cout<<"The charcter enterd is a Space"<<endl;
        }else{
            cout<<"Error! The input is not recognised charcter type."<<endl;
        }
    }
};
int main(){
    key k;
    k.board();
    return 0;
}