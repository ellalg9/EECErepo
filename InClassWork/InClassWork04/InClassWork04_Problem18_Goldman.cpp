#include <iostream>
using namespace std;

/*
Ella Goldman
10/5/2026
Takes n for side length and prints outline of pyramid.
*/

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= (2*n-1); k++)
        {
            if (i == n)
            {
                cout << "*";
            }
            else if (k == n + 1 - i || k == n + i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}