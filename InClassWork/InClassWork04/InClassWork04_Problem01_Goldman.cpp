#include <iostream>
using namespace std;

/*
Ella Goldman
10/2/2026
Takes int n and prints that number of * in vertical line.
*/

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "*" << endl;
    }
    return 0;
}