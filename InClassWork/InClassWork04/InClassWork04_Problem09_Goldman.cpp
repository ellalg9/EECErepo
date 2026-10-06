#include <iostream>
using namespace std;

/*
Ella Goldman
10/4/2026
Takes n value and prints an inverted triangle with
the right side straight.
*/

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = n; k >= i; k--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}