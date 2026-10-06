#include <iostream>
using namespace std;

/*
Ella Goldman
10/4/2026
Takes an n value and prints an inverted triangle
based on the user input.
*/

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}