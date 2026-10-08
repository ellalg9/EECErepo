#include <iostream>
using namespace std;

/*
Ella Goldman
10/5/2026
Takes n value (up to 9) and prints triangle
of digits where the row of digits
counts up to the row's number.
*/

int main()
{
    int n;
    cout << "Enter n: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}