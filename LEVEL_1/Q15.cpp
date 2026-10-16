#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "ENTER SIDE A OF TRIANGLE: ";
    cin >> a;
    cout << "ENTER SIDE B OF TRIANGLE: ";
    cin >> b;
    cout << "ENTER SIDE C OF TRIANGLE: ";
    cin >> c;
    if (a==b and b==c)
    {
        cout<<"TRIANGLE IS EQUILATERAL TRIANGLE";
    }
    else if (a==b or a==c or b==c)
    {
        cout << "TRIANGLE IS Isosceles";
    }
    else{
        cout<<"TRIANGLE IS SCALENE";
    }
    
    
}