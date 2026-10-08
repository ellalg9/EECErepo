#include <iostream>
using namespace std;

/*
Ella Goldman
10/5/2026
Takes n value and prints outline of right triangle.
*/

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || i == n || j == i)
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