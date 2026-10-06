#include <iostream>
using namespace std;

/*
Ella Goldman
10/4/2026
Takes a n value and prints a triangle with n rows
with each row having that number of stars
(1st row 1 star, 2nd row 2 stars, etc).
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
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}