#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    
    if(ch>='0' &&ch<='9'){
    cout << ch << " is an Digit." << endl;
    }
    else{
    cout << ch << " is not an Digit." << endl;
    }
}
