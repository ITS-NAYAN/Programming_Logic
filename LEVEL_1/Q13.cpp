
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char alpha;

    cout << "ENTER ALPHABET TO CHECK VOWEL OR NOT: ";
    cin >> alpha;

    alpha = tolower(alpha);

    if (alpha == 'a' || alpha == 'e' || alpha == 'i' ||
        alpha == 'o' || alpha == 'u')
    {
        cout << "Vowel";
    }
    else if (alpha >= 'a' && alpha <= 'z')
    {
        cout << "Consonant";
    }
    else
    {
        cout << "Invalid Input";
    }

    return 0;
}
