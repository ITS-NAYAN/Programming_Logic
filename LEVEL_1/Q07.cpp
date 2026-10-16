#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "ENTER NUMBER: ";
    cin >> num;

    if (num > 0)
    {
        cout << "NUMBER IS POSITIVE ";
    }
    else if (num < 0)
    {
        cout << "NUMBER IS NEGATIVE";
    }
    else
    {
        cout << "NUMBER IS ZERO";
    }
}