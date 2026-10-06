#include <iostream>
using namespace std;

/*
Ella Goldman
10/2/2026
Takes int n and prints that number of * in a horizontal line.
*/

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for(int i=0; i < n; i++)
    {
        cout << "*";
    }
    cout << endl;
    return 0;
}