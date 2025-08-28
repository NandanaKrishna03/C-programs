#include <iostream>
using namespace std;

int main() {
    char ch;
    
    cout<<"enter the character: ";
    cin>>ch;
    ch=tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << "The character is a Vowel" << endl;
    } 
    else if ((ch >= 'a' && ch <= 'z')) {
        cout << "The character is a Consonant" << endl;
    } 
    else {
        cout << "Not an alphabet character" << endl;
    }

    return 0;
}