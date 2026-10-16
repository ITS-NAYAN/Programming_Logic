#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "ENTER AGE: ";
    cin >> age;
    if (age < 0)
    {
        cout << "ENTER VALID AGE";
    }
    else if (age >= 0 and age < 1)
    {
        cout << "INFANT";
    }
    else if (age >= 1 and age < 13)
    {
        cout << "CHILD";
    }
    else if (age >= 13 and age <= 19)
    {
        cout << "TEENAGER";
    }
    else if (age >= 20 and age <= 59)
    {
        cout << "ADULT";
    }
    else if (age > 60)
    {
        cout << "SENIOR CITIZEN";
    }
}