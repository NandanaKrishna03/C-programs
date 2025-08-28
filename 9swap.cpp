#include <iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"enter the Number1: ";
    cin>>a;
    cout<<"enter the Number2: ";
    cin>>b;

    temp=a;
    a=b;
    b=temp;

    cout << "After swapping: a = " << a << ", b = " << b << endl;

}