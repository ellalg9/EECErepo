#include <iostream>
using namespace std;

/*
Ella Goldman
10/5/2026
Takes a number of rows and columns and prints a square of *.
*/

int main()
{
    int rows, cols;
    cout << "Enter rows: ";
    cin >> rows;
    cout << "Enter columns: ";
    cin >> cols;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == cols)
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
