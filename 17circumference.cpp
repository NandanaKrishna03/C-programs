#include <iostream>
using namespace std;

int main() {
    float radius, cir;
    const float PI=3.14159;

    cout << "Enter the radis of the circle: ";
    cin >> radius;

    cir=PI*2*radius;

    cout << "Circumferenc of Circle =" << cir << endl;

    return 0;
}
