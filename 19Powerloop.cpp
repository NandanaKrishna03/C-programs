#include <iostream>
using namespace std;

int main() {
    int base, exponent;
    long long result = 1;   // use long long for larger values

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    for (int i = 1; i <= exponent; i++) {
        result = result * base;
    }

    cout << base << "^" << exponent << " = " << result << endl;

    return 0;
}
