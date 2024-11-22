//
// Created by 12san on 19-09-2024.
//
#include<iostream>
using namespace std;
int main() {
    int rows = 4;
    int n = 10;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            cout<<n--<<" ";
        }
        cout<<endl;
    }
    return 0;
}