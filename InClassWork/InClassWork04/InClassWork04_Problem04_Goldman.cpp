#include <iostream>
using namespace std;

/*
Ella Goldman
10/3/2026
Takes row and column and prints grid of *
based on the user input.
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
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}