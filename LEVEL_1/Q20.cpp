
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double height, weight, bmi;

    cout << "ENTER HEIGHT IN CM: ";
    cin >> height;

    cout << "ENTER WEIGHT IN KG: ";
    cin >> weight;

    if (height <= 0 || weight <= 0)
    {
        cout << "INVALID INPUT";
    }
    else
    {
        height = height / 100;

        bmi = weight / (height * height);

        cout << fixed << setprecision(2);
        cout << "BMI = " << bmi << endl;

        if (bmi < 18.5)
        {
            cout << "Category = Underweight";
        }
        else if (bmi < 25)
        {
            cout << "Category = Normal";
        }
        else if (bmi < 30)
        {
            cout << "Category = Overweight";
        }
        else
        {
            cout << "Category = Obese";
        }
    }

    return 0;
}
