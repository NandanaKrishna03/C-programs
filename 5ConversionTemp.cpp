#include <iostream>
using namespace std;
int main(){
    float celsius, fahrenheit;
    cout <<"enter temperature in celcius:";
    cin>>celsius;

    fahrenheit=(celsius*9.0/5.0)+32;

    cout<<"Temperature in fahrenheit ="<< fahrenheit << endl;
    return 0;
}