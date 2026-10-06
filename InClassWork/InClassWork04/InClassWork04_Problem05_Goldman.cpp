#include <iostream>
using namespace std;

/*
Ella Goldman
10/4/2026
Takes number of rows and columns and
prints * for row if even and - if odd.
*/

int main()
{
    int row;
    int column;
    cout << "Enter rows: ";
    cin >> row;
    cout << "Enter columns: ";
    cin >> column;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            if (i % 2 == 0)
                cout << "-";
            else
                cout << "*";
        }
        cout << endl;
    }
    return 0;
}