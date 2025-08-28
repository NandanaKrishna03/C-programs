#include <iostream>
using namespace std;
int main(){
        int a;
        cout<<"enter the Number: ";
        cin>>a;

        if(a>0){
            cout<<a <<" is positive"<< endl;

        }
        else if(a<0){
            cout<<a <<" is negative"<< endl;
        }
        else{
            cout<< "zero"<< endl;
        }
        return 0;
}
