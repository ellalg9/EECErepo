#include <iostream>
using namespace std;

/*
Ella Goldman
10/5/2026
Takes n value and prints diamond shape of *
*/

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= (n-i); k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2*i-1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    n -= 1;
    for (int i = n; i >= 1; i--)
    {
        for (int k = 0; k <= (n-i); k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2*i-1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}