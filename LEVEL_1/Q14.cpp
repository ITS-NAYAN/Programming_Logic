#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"ENTER SIDE A OF TRIANGLE: ";
    cin>>a;
    cout<<"ENTER SIDE B OF TRIANGLE: ";
    cin>>b;
    cout<<"ENTER SIDE C OF TRIANGLE: ";
    cin>>c;
    if ((a+b>c) & (a+c>b) & (b+c>a))
    {
        cout<<"TRIANGLE IS VALID TRIANGLE";
    }
    else{
        cout<<"TRIANGLE IS INVALID TRIANGLE";
    }
    

}