/*Write a program to check whether a given character is an alphabet (uppercase),
an alphabet (lower case), a digit or a special character.*/
#include <iostream>
using namespace std;
int main()
{
    char x;
    cout << "Enter Any Thing : ";
    cin >> x;
    if (x >= 'a' && x <= 'z')
    {
        cout << x << " Is LowerCase Character";
    }
    else if (x >= 'A' && x <= 'Z')
    {
        cout << x << " Is UpperCase";
    }
    else if (x >= '0' && x <= '9')
    {
        cout << x << " Is Digit";
    }
    else
    {
        cout << x << " Is Special Character";
    }
    return 0;
}