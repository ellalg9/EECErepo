#include <iostream>
using namespace std;

/*
Ella Goldman
9/28/26
Takes a code input guess, if the input matches
the code stored, access is granted, and if not,
access is denied. User gets three attempts.
*/

int main()
{
    int code = 4321;
    int i = 0;
    int guess;
    while (i < 3)
    {
        cout << "Enter code: " << endl;
        cin >> guess;
        i++;
        if (guess == code)
        {
            cout << "Access granted" << endl;
            break;
        }
        else
        {
            cout << "Try again" << endl;
        }
    }
    return 0;
}