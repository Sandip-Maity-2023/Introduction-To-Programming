//
// Created by 12san on 22-09-2024.
//
#include <iostream>
using namespace std;

class Area {
public:

    float calculate(float b, float h) {
        return 0.5 * b * h;
    }

        float calculate(float r) {
        return 3.14159 * r * r;
    }

    float calculate(float l, float w, int isRectangle) {
        return l * w;
    }
};

int main() {
    Area x;
    float base, height, radius, length, width;

    cout << "Enter base and height of the triangle: "<<endl;
    cin >> base >> height;
    cout << "Area of Triangle: " << x.calculate(base, height) << endl;

    cout << "Enter radius of the circle: "<<endl;
    cin >> radius;
    cout << "Area of Circle: " << x.calculate(radius) << endl;

    cout << "Enter length and width of the rectangle: "<<endl;
    cin >> length >> width;
    cout << "Area of Rectangle: " << x.calculate(length, width, true) << endl;

    return 0;
}
