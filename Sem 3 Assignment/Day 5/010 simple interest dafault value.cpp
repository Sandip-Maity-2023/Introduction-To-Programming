//
// Created by 12san on 22-09-2024.
//
#include <iostream>
using namespace std;

class interest {
public:

    float calculate(float p, float t, float r = 15.0) {
        return (p * t * r) / 100;
    }
};

int main() {
    interest i;
    float p, t, r;

    cout << "Enter the principal amount: "<<endl;
    cin >> p;
    cout << "Enter the time (in years): "<<endl;
    cin >> t;

    char choice;
    cout << "Do you want to input the rate of interest? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        cout << "Enter the rate of interest: "<<endl;
        cin >> r;
        cout << "Simple Interest: " << i.calculate(p, t, r) << endl;
    } else {
        cout << "Simple Interest (with default rate 15%): " << i.calculate(p, t) << endl;
    }

    return 0;
}
