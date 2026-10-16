#include <iostream>
using namespace std;

int main()
{
    int a, b,c;
    cout << "ENTER NUMBER A: ";
    cin >> a;
    cout << "ENTER NUMBER B: ";
    cin >> b;
    cout<<"ENTER NUMBER C: ";
    cin>>c;

    if (a>b && a>c)
    {
        cout<<"NUMBER A IS GREATER";
    }
    else if (b>a && b>c)
    {
        cout<<"NUMBER B IS GREATER";
    }
    else if (c>a && c>b)
    {
        cout<<"NUMBER C IS GREATER";
    }
    else{
        cout<<"ALL ARE EQUAL";
    }
}