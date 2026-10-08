#include <iostream>
using namespace std;

/*
Ella Goldman
10/6/2026
Takes odd n and prints an x with line length n.
*/

int main()
{
    int n;
    cout << "Enter odd n: ";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "n must be odd" << endl;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i == j || (i + j) == (n + 1))
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
    }
    return 0;
}