#include <iostream>
using namespace std;

int main(){
    int a,b;
    string op;
    cout<<"ENTER NUMBER A: ";
    cin>>a;
    cout<<"ENTER NUMBER B: ";
    cin>>b;
    cout<<"CHOOSE OPERATOR FROM THIS (+ - * /): ";
    cin>>op;
    if (op=="+")
    {
        cout<<"ADDITION OF TWO NUMBER IS: "<<a+b;
    }
    else if (op=="-")
    {
        cout<<"SUBSTRACTION OF TWO NUMBER IS: "<<a-b;
    }
    else if (op=="*")
    {
        cout<<"MULTIPLICATION OF TWO NUMBER IS: "<<a*b;
    }
    else if (op=="/")
    {
        cout<<"DIVISION OF TWO NUMBER IS: "<<a/b;
    }
    else{
        cout<<"ENTER CORRECT OPERATOR";
    }
}