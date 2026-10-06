#include <iostream>
using namespace std;

/*
Ella Goldman
10/2/2026
Takes int n and prints that number of * minus 1
in vertical line, then prints n number of * in horizontal line.
*/

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        cout << "*" << endl;
    }

    for(int j = 1; j <= n; j++)
    {
        cout << "*";
    }
    cout << endl;
    
    return 0;
}