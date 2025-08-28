#include <iostream>
using namespace std;
int main(){
    float Principal, rate ,time,simpleInterst;
    cout<<"Enter Principal: ";
    cin>>Principal;

    cout<<"Enter rate: ";
    cin>>rate;

    cout<<"time: ";
    cin>>time;

    simpleInterst=(Principal*rate*time)/100;
    cout<<"Simple Interest =" <<simpleInterst<<endl;
    return 0;

}
