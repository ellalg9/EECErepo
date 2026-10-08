#include <iostream>
using namespace std;

/*
Ella Goldman
10/5/2026
Takes n value of rows and prints Floyd's triangle.
*/

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int num = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}