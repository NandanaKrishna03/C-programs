#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    ch=tolower(ch);
    if(ch>='a'&&ch<='z'){
    cout << ch << " is an Alphabet." << endl;
    }
    else{
    cout << ch << " is not an Alphabet." << endl;
    }
}
