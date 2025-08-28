#include <iostream>
using namespace std;

int main() {
    int num, cube;

    cout << "Enter a number: ";
    cin >> num;

    cube = num * num * num;

    cout << "Cube of " << num << " = " << cube << endl;

    return 0;
}
