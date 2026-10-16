#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"ENTER NUMBER 1: ";
    cin>>a;
    cout<<"ENTER NUMBER 2: ";
    cin>>b;
    cout<<"CURRENT VALUE OF A IS "<<a<<" CURRENT VALUE OF B IS "<<b<<endl;
    b = a + b;
    a=b-a;
    cout<<"UPDATED VALUE OF A IS "<<a<<endl;
    b=b-a;
    cout << "UPDATED VALUE OF B IS " << b << endl;
}