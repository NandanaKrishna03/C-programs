#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double base,exponent, power;

    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    power=pow(base,exponent);


    cout << "Power =" << power << endl;

    return 0;
}
