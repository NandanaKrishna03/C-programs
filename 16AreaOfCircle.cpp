#include <iostream>
using namespace std;

int main() {
    float radius, area;
    const float PI=3.14159;

    cout << "Enter the radis of the circle: ";
    cin >> radius;

    area=PI*radius*radius;

    cout << "Area of Circle =" << area << endl;

    return 0;
}
